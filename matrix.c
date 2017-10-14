#include<stdio.h>

void main()
{
  int i = 0, j = 0;
  int array1[2][2], array2[2][2], array3[2][2];

  for(i = 0; i < 2; i++)
    {
      for(j = 0; j < 2; j++)
      {

        scanf("%d",&array1[i][j]);

      }
    }
    for(i = 0; i < 2; i++)
      {
        for(j = 0; j < 2; j++)
        {
          scanf("%d",&array2[i][j]);
        }
      }

      int a = array1[i][j] * array2 [i][j] + array1[i][j+1] * array2[i+1][j];
      int b = array1[i][j] * array2[i][j+1] + array1[i][j+1] * array2[i+1][j+1];
      int c = 5;
      int d = 7;

      for(i = 0; i < 2; i++)
      {
        for(j = 0; j < 2; j++)
        {
          if(i == 0 && j == 0)
          {
            array3[i][j] = a;
          }
          if(i == 0 && j == 1)
          {
            array3[i][j] = b;
          }

          if(i == 1 && j == 0)
          {
            array3[i][j] = c;
          }

          if(i == 1 && j == 1)
          {
            array3[i][j] = d;
          }

        }
      }


      for(i = 0; i < 2; i++)
        {
          for(j = 0; j < 2; j++)
          {
            printf("%d",array3[i][j]);
          }
        }



}
