#include<stdio.h>


void main()
{

  int sum[6];
  int array1[3][3] = {1,2,3,4,5,6,7,8,9};
  int k = 0;
  int i,j;
  int value;
  for (i = 0; i < 2; i++)
  {

    for(j = 0; j < 2; j++)
    {
      value = array1[i][j] + array1[i][j+1] + array1[i+1][j] + array1[i+1][j+1];
      sum[k] = value;
      k++;
    }
  }


  for(i = 0; i < k; i++){
    printf("%d->",sum[i]);
  }
}
