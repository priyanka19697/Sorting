#include<stdio.h>
 void swap(int *x,int *y)
 {
   int temp;
   temp=*x;
   *x=*y;
   *y= temp;
 }
void bubbleSort(int arr[],int n)
{
  int k;
  for(k=0;k<n;k++)
  { flag =0 ;
    for(i=0;i<=n-k-1;i++)
    {
      if(arr[i]>arr[i+1])
      {
        swap(&arr[i],&arr[i+1]);
        flag = 1;
      }
    }
    if (flag==0)
    break;
  }
}
void print(int arr[],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d \n",a[i]);
  }
}

void main()
{
  int arr[] = [70,36,64,90,20];
  bubbleSort(arr,5);
  printf("sorted array \n", );
  printArray(arr,5);
}
