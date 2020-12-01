#include <stdio.h>
#include <stdlib.h>
const  int n=5;
const int m=4;
int main()
{
    int i, j, a[m][n], b[n*m],l;
    printf("convert matrix to row or row to matrix (1 or 0)\n");
    scanf("%d", &l);
    if (l)
    {
        printf("enter a matrix of size %d by %d\n", m, n);
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++) scanf("%d", &a[i][j]);
        printf("\n");
    }
for (i=0; i<m; i++)
        for (j=0; j<n; j++) b[i*n+j]=a[i][j];
for (i=0; i<m*n; i++)
         printf("%d ", b[i]);
    }
    else
        {
            printf("enter an array of size %d\n", n*m);
        for (i=0; i<m*n; i++) scanf("%d", &b[i]);
    for (i=0; i<m*n; i++) a[i/n][i%n]=b[i];
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++) printf("%4d", a[i][j]);
        printf("\n");
    }
    }
    return 0;
}
