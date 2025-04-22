#include<stdio.h>
#include<conio.h>

int main()
{
    int number,i,flag=0;
    printf("Enter a number");
    scanf("%d",&number);
    for(i=2;i<number;i++)
    {
       if(number % i == 0)
       {
         flag=1;
         break;
       } 
    }
    if(flag==0)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
getch();
return 0;
}