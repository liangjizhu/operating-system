#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

#define NUM_GRADE 3

struct Student {
    char name[20];
    float grade[NUM_GRADE];
    float average;
};
typedef struct Student tStudent;

void data_student(tStudent *student);
void average_grade(tStudent *student);

int main(int argc, char **argv){
    int num_student;
    int fd, nwrite;

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        exit(1);
    }

    if ((fd = open(argv[1], O_WRONLY | O_CREAT | O_TRUNC, 0660)) < 0){
        perror("Error in open file");
        exit(1);
    }

    printf("Num of student: ");
    scanf("%d", &num_student);
    getchar();

    tStudent *students = (tStudent *)malloc(num_student * sizeof(tStudent));
    if (students == NULL) {
        perror("Error allocating memory");
        close(fd);
        exit(1);
    }

    for (int i = 0; i < num_student; i++){
        data_student(&students[i]);
        average_grade(&students[i]);
        printf("Student %s\n", students[i].name);
        for (int j = 0; j < NUM_GRADE; j++){
            printf("Grade %d: %f\n", j, students[i].grade[j]);
        }
        printf("Average: %f\n", students[i].average);

        if ((nwrite = write(fd, &students[i], sizeof(tStudent))) < 0){
            perror("Error in write file");
            close(fd);
            free(students);
            exit(1);
        }
    }

    free(students);
    close(fd);
    return 0;
}

void data_student(tStudent *student){
    printf("Name of the student: ");
    scanf("%19s", student->name);
    getchar();
    for (int i = 0; i < NUM_GRADE; i++){
        printf("Grade %d of the student %s (decimals with .): ", i, student->name);
        scanf("%f", &(student->grade[i]));
        getchar();
    }
}

void average_grade(tStudent *student){
    float sum = 0;
    for (int i = 0; i < NUM_GRADE; i++){
        sum += student->grade[i];
    }
    student->average = sum / NUM_GRADE;
}
