#include<stdio.h>
#include<conio.h>
int main()
{
    char character;

    printf("Enter a character");
    scanf("%c",&character);

    switch (character)
    {
    case 'a':
        printf("Its a vowel");
        break;
    case 'e':
        printf("Its a vowel");
        break;
    case 'i':
        printf("Its a vowel");
        break;
    case 'o':
        printf("Its a vowel");
        break;
    case 'u':
        printf("Its a vowel");
        break;
    
    default:
    printf("not a vowel");
        break;
    };
    getch();
}
