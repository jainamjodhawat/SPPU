#include<stdio.h>
#include<conio.h>
int main(){
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    (age<18)?printf("Not Eligible for voting"):printf("Eligible for voting");
    getch();
    return 0;
}