#include<stdio.h>
#include<malloc.h>
int length(int arr[])
{ int count=0;
  for(int i=0;arr[i]!= '/0',i++)
    count++;
  return count;
}

void mergeSort(int array[],int mid)
{
  int *ll,*lr,lengthofarray = length(array);
  if(lengthofarray<2)
    return;
  int mid = lengthofarray/2;
  ll = (int*)malloc(mid*sizeof(int));
  lr = (int*)malloc((lengthofarray-mid)*sizeof(int));

  for(int i=0;i<mid;i++)
  ll[i] = array[i];
  for(int i=mid;i<lengthofarray-1;i++)
  lr[i-mid] = array[i];

  mergeSort(ll,mid);
  mergeSort(lr,(lengthofarray-mid));
  merge(ll,lr,array);
}

void merge(int ll[],int lr[],int a[])
{
  int nll = length(ll);
  int nlr = length(rl);
  int i=0;j=0;k=0;
  while(i<nll && j<nlr)
  {
    if(ll[i]<lr[j])
    {
      a[k] = ll[i];
      i++;
      k++;
    }
    else
    {
      a[k] = lr[j];
      k++;
      j++;
    }
  }
  if(i<nll)
  {
    a[k] = ll[i];
    i++;
    k++;
  }
  if(j<nlr)
  {
    a[k] = lr[j];
    j++;
    k++
  }
}

void print(int a[])
{
  int n = length(a);
  for(int i=0;i<n-1;i++)
    printf("\t %d",a[i]);
}

void main()
{
  int b[] = {15,43,12,17,2};
  mergeSort(b,length(b));
  print(b);
}
