#include <stdio.h>

int main()
{
    int i, max, min, n;


    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    int a[i];
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for (i = 1; i < n; i++)
    {
  
        if (a[i] > max)
        {
            max = a[i];
        }

      
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n\n", min);
	return 0;
}
