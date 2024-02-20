#include <stdio.h>
int main() {
  int n,m,i, j,sum=0;
  printf("Enter the number of rows");
  scanf("%d", &n);
  printf("Enter the number of columns");
  scanf("%d", &m);
  int a[n][m];
  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < n; ++i)
  {
    for (j = 0; j < m; ++j) { 
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i < n; ++i)
  {
    for (j = 0; j < m; ++j)
    {
        if(i==j)
        {
            sum=sum+a[i][j];
        }
    }
  }
  printf("sum of diagonal elements is %d",sum);
  return 0;
}
