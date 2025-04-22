#include<conio.h>
#include<stdio.h>

int addition(int x, int y)
{
    int sum;
    sum=x+y;
    return sum;
}
int main(){
    int result,num1,num2;
    printf("Enter numbers to be added");
    scanf("%d %d",&num1,&num2);
    result=addition(num1,num2);
    printf("The result is %d",result);
    getch();
    return 0;
}