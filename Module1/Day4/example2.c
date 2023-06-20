// minimum and maximum number in an array
#include <stdio.h>

int main()
{
    
    int i,max=0,min,arr[100],n;
    printf("enter the length of the array:");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
             max=arr[i];
        if(arr[i]<min)
             min=arr[i];
    }
    printf("minimum value:%d\n",min);
    printf("maximum value:%d\n",max);
    
return 0;
}