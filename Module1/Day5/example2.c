//convert string as integer
#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    int i,number=0;
    printf("Enter a string:");
    scanf("%[^\n]s",string);
    for(i=0;i<strlen(string);i++)
    {
        number=number*10+(string[i]-48);
    }   
    printf("Integer number is:%d",number);
    return 0;
}