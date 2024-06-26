#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFSIZE 512

int copyfile(char *input, char *output){
    char buffer[BUFSIZE];
    int input_file, output_file, nread;
    if ((input_file = open(input, O_RDONLY)) < 0){
        return -1;
    }
    if ((output_file = creat(output, 0644)) < 0){
        close(input_file);
        return -2;
    }
    while ((nread = read(input_file, buffer, BUFSIZE)) > 0){
        if (write(output_file, buffer, nread) < nread){
            close(input_file);
            close(output_file);
            return -3;
        }
    }
    if (nread == -1)
        return -4;
    close(input_file);
    close(output_file);
    return 0;
}

int main(int argc, char ** argv){
    int result = copyfile(argv[1], argv[2]);
    if (-1 == result){
        printf("source file cannot be open\n");
    }
    else if (-2 == result){
        printf("destination file cannot be created\n");
    }
    else if (-3 == result){
        printf("destination file cannot be writen\n");
    }
    else{
        printf("file %s copied to file %s\n", argv[1], argv[2]);
    }
}
