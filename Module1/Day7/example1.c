//student data
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int Rollno;
    char Name[20];
    float Marks;
};

void parses_and_initialize(struct Student* stds, int Num_stds) {
    char input_string[100];
    
    for (int i = 0; i < Num_stds; i++)
    {
        printf("Enter details of the Student %d:\n", i + 1);
        printf("enter the detail as a String(rollnumber name marks):\n ");
        fgets(input_string, sizeof(input_string), stdin);
        input_string[strcspn(input_string, "\n")] = '\0';
        char* token = strtok(input_string, " ");
        stds[i].Rollno = atoi(token);
        token = strtok(NULL, " ");
        strncpy(stds[i].Name, token, sizeof(stds[i].Name) - 1);
        stds[i].Name[sizeof(stds[i].Name) - 1] = '\0';
        token = strtok(NULL, " ");
        stds[i].Marks = atof(token);
        printf("\n");
    }
}

void Student_Data(struct Student* stds, int Num_stds) {
    for (int i = 0; i < Num_stds; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("         Roll No: %d\n", stds[i].Rollno);
        printf("         Name: %s\n", stds[i].Name);
        printf("         Marks: %.2f\n", stds[i].Marks);
        printf("\n");
    }
}

int main() 
{
    int Num_stds;
    printf("Enter the number of students: ");
    scanf("%d", &Num_stds);
    getchar(); 
    struct Student* stds = (struct stds*)malloc(Num_stds * sizeof(struct Student));
    parses_and_initialize(stds, Num_stds);
    Student_Data(stds, Num_stds);
    free(stds);
    
    return 0;
}
