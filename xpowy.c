#include<stdio.h>
#include<math.h>


int power(int num, int pow);
void main()
{
  int x[] = {2,2,3}, y[] = {2,2,2};
  int val,k = 0;
  int i,j,val2;
  int value;
  int array[10],array2[10];
  for(i = 0;i < 3;i++)
  {
    for(j = 0;j < 3;j++)
    {
      val = power(x[i],y[j]);
      val2 = power(y[j],x[i]);
      array[k] = val;
      array2[k] = val2;
      k++;
    }

  }
  for(i = 0;i < 9; i++)
  {
    printf("%d->",array[i]);


  }

    printf("\n");
  for(i = 0;i < 9; i++)
  {
    printf("%d->",array2[i]);

  }

  printf("\n");

  for(i = 0; i < 9; i++)
  {
    value = i;


    if(array[i] > array2[i])
    {



      if(i < 3)
      {
        j = i % 3;
        printf("\n%d,%d",x[0],y[j]);

      }

      if(i > 2 && i < 5)
      {
        j =i % 3;
        printf("\n%d,%d",x[1],y[j]);
      }
      if(i>5 && i <9)
      {
        j = i % 3;
        printf("\n%d,%d",x[2],y[j]);
      }



    }
  }

}


int power (int num, int pow)

{

    if (pow)

    {

        return (num * power(num, pow - 1));

    }

    return 1;

}
