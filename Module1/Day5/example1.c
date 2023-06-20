//toggle case
#include<stdio.h>
#include<string.h>
int main(){
    char string[300];
    int i;
    printf("Enter a string:");
    scanf("%[^\n]s",string);

    for(i=0;i<strlen(string);i++)
    {
        if(isupper(string[i]))
            string[i]=tolower(string[i]);
        else if(islower(string[i]))
            string[i]=toupper(string[i]);
    }
    printf("Output string is:%s",string);
    
    return 0;
}