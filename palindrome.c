#include <stdio.h>
#include <conio.h>
int main() {
    int num,orignal,reverse=0,remainder,sum;
    printf("Enter Number:\n");
    scanf("%d",&num);
    orignal=num;
    while(num != 0) {
        remainder=num%10;
        sum=remainder+sum;
        reverse=(reverse)*10+remainder;
        num=num/10; } 
        if(orignal==reverse)
        {
            printf("The number is palindrome \n");
        }
        else{
            printf("/n The number is not palindrome");
        }
        printf("The sum of the individual numbers is %d",sum);
    getch();
    return 0;
}
