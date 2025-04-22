#include<stdio.h>
#include<conio.h>

int main()
{
    int number, factorial=1,i;
    printf("Enter a number to calculate the factorial");
    scanf("%d",&number); 
    for(i=1;i<=number;i++)
    {
      factorial=factorial*i;
    }
    printf("The factorial of the given number is %d",factorial);
    getch();
    return 0;
}
