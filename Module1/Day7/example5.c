//searching 
#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[50];
    int age;
    
} Student;

Student stds[100]; 

int search(const char* name, int Num_stds) {
    for (int i = 0; i < Num_stds; i++) 
    {
        if (strcmp(stds[i].name, name) == 0)
        {
            return i; 
        }
    }
    return -1; 
}

int main() {
    
    int Num_stds = 9;

    strcpy(stds[0].name, "hari");
    stds[0].age = 20;
    
    strcpy(stds[1].name, "joy");
    stds[1].age = 22;
    
    strcpy(stds[2].name, "vamsi");
    stds[2].age = 19;
    
    strcpy(stds[3].name, "kairn");
    stds[3].age = 22;
    
    strcpy(stds[4].name, "jayanth");
    stds[4].age = 23;
   
    strcpy(stds[5].name, "jaldesh");
    stds[5].age = 24;
    
    strcpy(stds[6].name, "kaylash");
    stds[6].age = 26;
    
    strcpy(stds[7].name, "vanu");
    stds[7].age = 29;
    
    strcpy(stds[8].name, "sosnu");
    stds[8].age = 35;
   
    char Name_search[50];
    printf("\tavailable names are \n**kaylash,jaldesh,jayanth,kairn,vamsi,vanu,hari,joy,sosnu**");
    printf("\nEnter the name to search\n: ");
    scanf("%s", Name_search);
    
    int index = search(Name_search, Num_stds);
    
    if (index != -1) {
        printf("Student found at index %d\n", index);
        printf("Name: %s\n", stds[index].name);
        printf("Age: %d\n", stds[index].age);
    } else {
        printf("Student not found.\n");
    }
    
    return 0;
}