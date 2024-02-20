#include <stdio.h>
int main() {
  int n,m,i, j;
  printf("Enter the number of rows): ");
  scanf("%d", &n);
  printf("Enter the number of columns  ");
  scanf("%d", &n);
  int a[n][m],b[n][m],c[n][m];
  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < n; ++i)
    for (j = 0; j < m; ++j) { 
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < n; ++i)
    for (j = 0; j < m; ++j) {;
      scanf("%d", &b[i][j]);
    }
  for (i = 0; i < n; ++i)
    for (j = 0; j < m; ++j) {
      c[i][j] = a[i][j] + b[i][j];
    }
  printf("\nSum of two matrices: \n");
  for (i = 0; i < n; ++i)
    for (j = 0; j < m; ++j) {
     scanf("%d",c[i][j]);
    }

  return 0;
}
