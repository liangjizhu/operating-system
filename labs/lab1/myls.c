//P1-SSOO-23/24


#include <stdio.h>		// Header file for system call printf
#include <unistd.h>		// Header file for system call gtcwd
#include <sys/types.h>	// Header file for system calls opendir, readdir y closedir
#include <dirent.h>
#include <string.h>
#define PATH_MAX 4096  // Maximum length of a path


int main(int argc, char *argv[]) {
    DIR *dir; 
    struct dirent *entry; 
    char path[PATH_MAX]; // Path to the directory to be listed

    if (argc < 2) { 
        // If no directory is specified, use the current directory
        getcwd(path, PATH_MAX); // Get the current working directory
        dir = opendir(path); // Open the current directory
    } else {
        dir = opendir(argv[1]); // Open the directory specified as an argument
    }

    if (dir == NULL) {
        perror("opendir failed"); // Print an error message
        return -1;
    }

    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name); // Print the name of the file or directory
    }
    closedir(dir); // Close the directory
    return 0;
}

