#include <stdio.h>

int main()
{
    int i,n,count=0;


    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    int a[i];
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
      if(a[i]<0)
      { 
       count++;
      }
    }
    printf("number of negative elemnt in the array is %d",count);
    }