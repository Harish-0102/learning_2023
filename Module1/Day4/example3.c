// Reverse of an array
#include <stdio.h>

int main()
{
    
    int i,arr[100],n;
    printf("enter the length of the array:");
    scanf(" %d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("input array is:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\nReverse of an array is:\n");
    for(i=n-1;i>=0;i--)
    {
        printf(" %d",arr[i]);
    }
   
    
return 0;
}