#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1

int main(int argc, char *argv[]) {
    int fd;
    ssize_t nread;
    char buffer[BUFFER_SIZE];
    int lines = 0, words = 0, bytes = 0;
    int in_word = 0;

    // Check if the correct number of arguments is provided
    if (argc < 2) {
        printf("Too few arguments\n");
        return -1;
    }

    // Open the file
    fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        perror("Error opening file");
        return -1;
    }

    // Read the file byte by byte
    while ((nread = read(fd, buffer, BUFFER_SIZE)) > 0) {
        bytes += nread;
        if (buffer[0] == '\n') {
            lines++;
            in_word = 0;
        } else if (buffer[0] == ' ' || buffer[0] == '\t') {
            in_word = 0;
        } else {
            if (!in_word) {
                words++;
                in_word = 1;
            }
        }
    }

    if (nread < 0) {
        perror("Error reading file");
        close(fd);
        return -1;
    }

    // Close the file
    close(fd);

    // Print the results
    printf("%d %d %d %s\n", lines, words, bytes, argv[1]);

    return 0;
}
