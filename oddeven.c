#include <stdio.h>

int main()
{
    int i,j,n,t;


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
      if(a[i]%2==0)
      {
        printf("%d is a even number",a[i]);
      }
      else
      printf("%d is odd number",a[i]);  
    }
    }