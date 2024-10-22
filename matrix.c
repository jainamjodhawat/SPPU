#include<stdio.h>
#include<conio.h>

int main() {
    //int a[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    int a[3][3],i,j;
    long deta;
    printf("Enter the numbers");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("the numbers are");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t", a[i][j]);
        }
    }
    deta = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]* a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
    printf("The determinant is %ld", deta);
    getch();
    return 0;
}
