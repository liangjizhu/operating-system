#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>

void capture1(int s){
    printf("signal is here: %d\n", s);
    printf("time:%ld\n", time(NULL));
}
void capture2(int s){
    printf("signal is here: %d\n", s);
    printf("time:%ld\n", time(NULL));

}
int main(){
    int i;
    struct sigaction sa1, sa2;
    if (fork() == 0){
        sleep(10);
        kill(getpid(), SIGUSR1);
        sleep(3);
    }
    else
    {
        sa1.handler = capture1;
        sa1.sa_flags = 0;
        sigemptyset(&(sa1.sa_mask));
        sigaction(SIGUSR1, &sa1, NULL);

        sa2.handler = capture2;
        sa2.sa_flags = 0;
        sigemptyset(&(sa2.sa_mask));
        sigaction(SIGCHLD, &sa2, NULL);
        pause();
        pause();
        printf("%s\n", "signal received");
    }
}