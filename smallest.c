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
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        printf("the second smallest elemet is %d",a[n-2]);
    }