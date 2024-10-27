#include<conio.h>
#include<stdio.h>

int main()
{
    int DayNo;
    printf("Enter the number of the day");\
    scanf("%d", &DayNo);
    switch(DayNo){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Please enter a valid day number.");
    }
    getch();
    return 0;
    

}