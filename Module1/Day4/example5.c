// Difference between even and odd index numbers in an array
#include <stdio.h>

int main()
{
    
    int i,arr[100],n,even=0,odd=0,diff=0;
    printf("enter the length of the array:");
    scanf(" %d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
         if(i%2==0)
         {
              even=even+arr[i];
         }
         else
         {
             odd=odd+arr[i];
         }
    }
    diff=even-odd;
    printf("\n  Difference between even and odd index numbers in an array:%d",diff);

return 0;
}