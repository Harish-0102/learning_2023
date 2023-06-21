//storing student data
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char Name[50];
    int Roll_Number;
    float Marks;
};

int main() {
    int num;
    printf("Enter the total number of students: ");
    scanf("%d", &num);
    struct Student* std = (struct Student*)malloc(num * sizeof(struct Student));
    
    if (std == NULL) 
    {
        printf("Memory is not allocated!! Try again...\n");
        return 1;
    }

    for (int i = 0; i < num; i++) 
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name of the student: ");
        scanf("%s", std[i].Name);
        printf("Roll Number: ");
        scanf("%d", &std[i].Roll_Number);
        printf("Marks: ");
        scanf("%f", &std[i].Marks);
    }

    printf("\n\n**********Student Details**********\n");
    for (int i = 0; i < num; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("      \tName : %s\n", std[i].Name);
        printf("      \tRoll Number: %d\n", std[i].Roll_Number);
        printf("      \tMarks: %.2f\n", std[i].Marks);
    }

    
    free(std);

    return 0;
}
