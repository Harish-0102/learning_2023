//sum and average of an array
#include <stdio.h>

int main() {
   
   
      int arr[100],i,n,sum=0;
      float avg=0;
      printf("enter n:");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
          scanf("%d",&arr[i]);
      }
      for(i=0;i<n;i++)
      {
          sum=sum+arr[i];
      }
    
      printf("sum of elements in array:%d\n",sum);
      printf("average :%.2f",avg=sum/n);

    return 0;
}
