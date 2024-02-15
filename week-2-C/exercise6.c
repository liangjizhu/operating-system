#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    char name[25];
    float grade[3];
} Student;

int main(){
    int numberOfStudents;
    printf("Introduce the number of students ");
    scanf("%d", &numberOfStudents);

    Student* students = (Student*) malloc(numberOfStudents * sizeof(Student));

    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("Introduce the name of student %d ", i + 1);
        scanf("%s", students[i].name);
        float totalGrade = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("Introduce the mark %d for %s ", j + 1, students[i].name);
            scanf("%f", &students[i].grade[j]);
            totalGrade += students[i].grade[j];
        }

        float averageGrade = totalGrade / 3;
        printf("The average mark of %s is %.2f\n ", students[i].name, averageGrade);
    }
    free(students);

    return 0;    
}
