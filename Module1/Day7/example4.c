//Descending_sort
#include <stdio.h>

#define MAX_STUDENTS 30

typedef struct {
    char name[50];
    int marks;
} Student;

void Descending_sort(Student stds[], int Num_stds) {
    int i, j;
    Student temp;

    for (i = 0; i < Num_stds - 1; i++) {
        for (j = 0; j < Num_stds - i - 1; j++) {
            if (stds[j].marks < stds[j + 1].marks) {
                
                temp = stds[j];
                stds[j] = stds[j + 1];
                stds[j + 1] = temp;
            }
        }
    }
}

void main() {
    Student stds[MAX_STUDENTS];
    int i, num;

    printf("Enter the number of students: ");
    scanf("%d", &num);
    printf("Enter the student details:\n");
    for (i = 0; i < num; ++i) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", stds[i].name);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &stds[i].marks);
    }
    Descending_sort(stds, num);
    printf("The students sorted in descending order based on marks are:\n");
    for (i = 0; i < num; ++i) {
        printf("Name: %s, Marks: %d\n", stds[i].name, stds[i].marks);
        
    }
}