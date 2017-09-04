z#include<stdio.h>
void swap(int *x,int *y)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void selectionSort(int arr[],int n)
{
  int i,j,min;
  for(i=0;i<n-1;i++)
  {
    min = i;
    for(j=i+1;j<n;j++)
    if(a[j]<a[min])
    min = j;
    swap(&arr[min],&arr[i]);
  }
}

void printArray(int arr[],int n)
{
  int i=0;
  for(i=0;i<n;i++)
  printf("\n %d",a[i]);
}

int main()
{
  int arr[] = [70,36,64,90,20];
  selectionSort(arr,5);
  printf("sorted array \n", );
  printArray(arr,5);
  return 0;
}
