//Display_Struct_Array
#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void Display_Struct_Array(struct Student *stds, int Array_size) {
    for (int i = 0; i < Array_size; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        
        printf("Roll No: ");
        scanf("%d", &(stds[i].rollno));

        printf("Name: ");
        scanf("%s", stds[i].name);

        printf("Marks: ");
        scanf("%f", &(stds[i].marks));

        printf("\n");
    }
}

int main() {
    int Array_size;
    printf("Enter the number of students:");
    scanf("%d",&Array_size);
    struct Student stds[Array_size];

    Display_Struct_Array(stds, Array_size);

    printf("Display Structure Array:\n");
    for (int i = 0; i < Array_size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", stds[i].rollno);
        printf("Name: %s\n", stds[i].name);
        printf("Marks: %.2f\n", stds[i].marks);
        printf("\n");
    }

    return 0;
}