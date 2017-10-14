#include<stdio.h>
#include<malloc.h>
int length(int arr[])
{
  int count=0;
    for(int i=0;arr[i]!='\0';i++)
      count++;
    return count;
}

void merge(int l[],int r[],int a[])
{
  int nl = length(l);
  int nr = length(r);
  int i=0,j=0,k=0;
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

void mergeSort(int a[],int mid)
{
  int n,i;
  int *l,*r;

  n = length(a);
  if(n<2) //when array cant be divided any furthur
   return;

  mid = n/2;
  l = (int*)malloc(mid*sizeof(int));
  r = (int*)malloc((n-mid)*sizeof(int));
  for(i=0;i<mid;i++)
  l[i]=a[i];
  for(i=mid;i<n-1;i++)
  r[i-mid]=a[i];
  mergeSort(l,mid);
  mergeSort(r,n-mid);
  merge(l,r,a);
}



void print(int a[])
{ int n = length(a);
  for(int i =0;i<n;i++)
  printf("%d \t",a[i]);
}
void main()
{
  int b[]={15,43,12,17,2};
  mergeSort(b,length(b));
  print(b);
}
