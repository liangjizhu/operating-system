#include <stdio.h>
#include <unistd.h>

main (int argc, char ** argv)
{
    int num_proc, i, pid;
    num_proc = atoi (argv[ 1]);
    for (i = 0; i < num_proc; i++) {
        pid = fork();
        if (pid == 0) {
        write (1, "I am a process", 14); }
        }
}