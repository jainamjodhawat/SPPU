#include<conio.h>
#include<stdio.h>

int multiply( int a[5][5],int b[5][5], int result[5][5],int m,int n,int p,int q)
{
     for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{
    int a[5][5] = {{1, 2, 3}, {4, 5, 6}};
    int b[5][5] = {{7, 8}, {9, 10}, {11, 12}};
    int result[5][5];
    int m = 2, n = 3, p = 3, q = 2;
    multiply(a, b, result, m, n, p, q);

    printf("Result of Matrix Multiplication:\n");
    for (int i = 0; i < m; i++) {
        printf("\n");
        for (int j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
    }
    getch();
    return 0;
}
