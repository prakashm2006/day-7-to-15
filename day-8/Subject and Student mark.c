#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
int main() 
{
int roll[STUDENTS];
int marks [STUDENTS] [SUBJECTS];
int total [STUDENTS];
    for (int i = 0; i < STUDENTS;i++) 
    {
        printf("Enter roll number for student %d:", i + 1);
        scanf("%d", &roll[i]);
        total [i] = 0;
    for (int j = 0; j < SUBJECTS; j++) 
    {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &roll[i]);
        total[i] = 0;
    for (int j = 0; j < SUBJECTS; j++) 
    {
        printf("Enter marks for subject %d: ", j + 1);
        scanf("%d", &marks[i][j]);
        total [i] += marks[i][j];
    }
        printf("\n");
        printf("\nMarksheet:\n");
        printf("Roll No\tMarks1\tMarks2\tMarks3\tTotal\n");
    }
    for (int i = 0; i < STUDENTS; i++) 
    {
        printf("%d\t", roll[i]);
    for (int j = 0; j < SUBJECTS; j++) 
        printf("%d\t", marks[i][j]);
    }
        printf("%d\n", total[i]);
    }
return 0;
}