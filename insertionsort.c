#include<stdio.h>
void insertionSort(int a[],int n)
{
  int i,value,hole;
  for(i=1;i<=n-1;i++)
  {
    value = a[i];
    hole = i;
    while(hole>0 && a[hole-1]>value)
    {
      a[hole] = a[hole-1];
      hole = hole-1;
    }
    a[hole] = value;
  }
}

void printArray(int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d \n",a[i]);
  }
}

int main()
{
  int a[]={7,4,2,1,5,3};
  insertionSort(a,5);
  printf("\n sorted array");
  printArray(a,5);
  return 0;

}
