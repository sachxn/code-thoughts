#include<stdio.h>
#define size 5
int main()
{ 
  int i,sum=0;
  int arr[size];
  printf("Enter the 5 array element: \n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<size;i++)
  {
    sum+=arr[i];
  }
  printf("The sum is : %d \n",sum);
  printf("The average of array : %f",(((float)sum)/size));
  return 0;
}