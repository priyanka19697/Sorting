#include<stdio.h>

void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;

}

void bubbleSort(int array[], int n)
{
    int j,i;
    for(j = 0 ;j < n; j++)
    {
      //flag = 0;
      for(i = 0; i < j-1; i++)
      {
          if(array[i] > array[i+1])
          {
              swap(&array[i], &array[i+1]);
              //flag = 1;
          }
      }
      //if(flag == 0)
      //break;
   }
}

void selectionSort(int arr[], int n)
{
  int i,min,j;

  //to move to boundary of unsorted aray
  for(i = 0; i < n-1 ; i++)
  {
    min = i;
    for(j = 0; j < n-2; j++)
    {
      if(arr[j] < arr[min])
      min = j;
    }
    swap(&arr[min], &arr[j]);
  }

}

void insertionsort(int arr[], int n)
{
    int i,j,key;
    for(i = 0; i < n; i++)
    {
      key = arr[i];
      j = i-1;
      while( j > 0 && arr[j] > key)
      {
        arr[j+1] = arr[j];
        j = j-1;
      }
      arr[j+1] = key;
    }
}


void print(int arr[],int n)
{
  int i;
  for(i = 0; i < n; i++)
  {
    printf(" |%d|\n", arr[i]);
  }
}

void main()
{
    int arr[] = {70,45,56,80,63};
    int c;
    printf("\n enter choice");
    scanf("%d",&c);
    switch(c)
    {
      case 1:
              bubbleSort(arr,5);
              printf(" sorted array \n");
              print(arr,5);
              break;
      case 2:
              selectionSort(arr,5);
              printf(" sorted array \n");
              print(arr,5);
              break;
      case 3:
              insertionsort(arr,5);
              printf(" sorted array \n");
              print(arr,5);
              break;
     }

}
