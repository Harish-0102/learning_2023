//totalseconds
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char string[100];
    printf("Enter time as (H:M:S) formate:");
    scanf("%s",string);
    char *colon=strtok(string,":");
    int Hours,Minutes,Seconds,Total_seconds;
    Hours=strtol(colon,NULL,10);
    colon=strtok(NULL,":");
    Minutes=strtol(colon,NULL,10);
    colon=strtok(NULL,":");
    Seconds=strtol(colon,NULL,10);
    Total_seconds=(Hours*3600)+(Minutes*60)+Seconds;
    printf("Total seconds are:%d",Total_seconds);
    return 0;
}