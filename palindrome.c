#include <stdio.h>
#include <conio.h>
int main() {
    int num,orignal,reverse=0,remainder;
    printf("Enter Number:");
    scanf("%d",&num);
    orignal=num;
    while(num != 0) {
        remainder=num%10;
        reverse=(reverse)*10+remainder;
        num=num/10; } 
        if(orignal==reverse)
        {
            printf("The number is palindrome");
        }
        else{
            printf("/n The number is not palindrome");
        }
    getch();
    return 0;
}
