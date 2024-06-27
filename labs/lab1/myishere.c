//P1-SSOO-23/24

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>

// USAGE ./myishere <directory_path> <filename_with_the_type>
int main(int argc, char *argv[])
{
	/* If less than three arguments (argv[0] -> program, argv[1] -> directory to search, argv[2] -> file to find) print an error y return -1 */
	if(argc < 3)
	{
		printf("Too few arguments\n");
		return -1;
	}
	
	// struct of a directory with the <dirent.h> library
	struct dirent *files;
	// boolean value to check if file exists
	int exists = 0;

	// pointer directory which points to a directory
	DIR *directory = opendir(argv[1]);
	if (directory == NULL)
	{
		printf("Error, directory name not found\n");
		return -1;
	}
	else 
	{
		// we go through a loop for searching through the directory if directory exists
		while ((files = readdir(directory)) != NULL)
		{
			if (strcmp(files->d_name, argv[2]) == 0)
			{
				printf("File %s is in directory %s\n", argv[2], argv[1]);
				exists = 1;
			}

		}
	}

	// if file doesn't exists
	if (exists != 1)
	{
		printf("File %s is not in directory %s\n", argv[2], argv[1]);

	}

	// close the directory
	closedir(directory);
	return 0;
}