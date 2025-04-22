#include<stdio.h>
#include<conio.h>

int  main()
{
    int n,next,i,a=0,b=1;

    printf("Enter a number for fibonacci series");
    scanf("%d",&n);
    printf("%d \t %d ",a,b);
    for(i=1;i<=n;i++)
    {
     next=a+b;   
     printf("\t %d",next);
     a=b;
     b=next;
    }
    getch();
    return 0;
}