#include <stdio.h>
int main() {
  int n,m,i, j,k;
  printf("Enter the number of rows ");
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
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The product of the two matrices is: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
