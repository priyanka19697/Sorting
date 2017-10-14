#include<stdio.h>
#include<string.h>

void main()
{
  char string[] = "helleh";
  int i,j = 0;
  int len = strlen(string);
  printf("%d",len);
  for(i = 0; i < len/2 ;i++)
  {
    if(string[i] != string[len -i])
  {
    break;
  }
  j = j + 1;

}
printf("%d",j);
if(i == len/2)
{
  printf("\nPalindrome");

}
else
{
  printf("\nNot");

}

}
