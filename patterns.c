#include<conio.h>
#include<stdio.h>

int main()
{
    int i,j,n=1;
    //pattern 1
    for(i=1;i<=4;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("%d \t",j);
        }
    }
    
    //pattern 2
     
    for(i=1;i<=4;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("* \t");
        }
    }

    //pattern 3

    for(i=1;i<=4;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("%d \t",i);
        }
    }

    //pattern 4

    for(i=1;i<=4;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("%d \t",n);
            n++;
        }
    }

    //pattern 5

    for(i=1;i<=3;i++) //for upper part i.e. the three lines
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("* \t");
        }
    }

    for(i=2;i>=1;i--) //for lower part i.e. the lower two lines
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("* \t");
        }
    }
getch();
return 0;
}
