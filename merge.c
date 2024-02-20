#include <stdio.h>
int main()
{
	int n,m, i, j,b;

    printf("Input the number of elements  in the first array :");
       scanf("%d",&n);

    printf("Input the number of elements  in the second array :");
       scanf("%d",&m);
       int a1[n],a2[m];
    printf("enter the elemts in first array");
     for(i=0;i<n;i++)
    {
       scanf("%d",&a1[i]);
    }
    printf("enter the elemts in first array");
     for(i=0;i<m;i++)
     {
      scanf("%d",&a1[i]);
     }
     
     b = n+m;
	int a3[b];
	for (i = 0; i < n; i++) {
		a3[i] = a1[i];
	}

	// copying array 2 elements into an array
	for (i = 0, j = 0;
		j < b && i < m; i++, j++) {
		a3[j] = a2[i];
	}

	// Array Elements After Merging
	for (i = 0; i <b; i++) {
		printf("%d ", a3[i]);
	}
	return 0;
}
