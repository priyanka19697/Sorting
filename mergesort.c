#include<stdio.h>
int length(int a[])
{ int i,count = 0;
  for(i=0;a[i]!='\0';i++)
  count++;
  return count;
}

void merge(int l[],int r[],int a[])
{
  int nl,nr;
  int i=0,j=0,k=0;
  nl=length(l);
  nr=length(r);
  while(i<nl&&j<nr)
  {
    if(l[i]<=r[j])
    {
      a[k] = l[i];
      k=k+1;
      i=i+1;
    }
    else
    {
      a[k] = r[j];
      k = k+1;
      j = j+1;
    }
 }
  while(i<nl)
  {
    a[k] = l[i];
    i=i+1;
    k=k+1;
  }
  while(j<nr)
  {
    a[k] = r[j];
    j=j+1;
    k=k+1;
  }
}

void mergeSort(int a[])
{
  int i,mid,left[10],right[10];
  mid = n/2;
  for(i=0;i<mid;i++)
  left[i]=a[i];
  for(i=mid;i<n-1;i++)
  right[i-mid]=a[i];
  mergeSort(left);
  mergeSort(right);
  merge(left,right,a);
}



void print(int a[],int n)
{
  for(int i =0;i<n;i++)
  printf("%d \t",a[i]);
}
void main()
{
  int b[]={15,43,12,17,2};
  mergeSort(b);
  print(b,5);
}
