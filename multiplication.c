#include<stdio.h>
#include<conio.h>

int main()
{
    int number,i;
    printf("Enter a number for multiplication");
    scanf("%d",&number);

    for(i=1;i<=10;i++)
    {
        printf(" %d * %d = %d \n",number,i,number*i);
    }
    getch();
    return 0;
}