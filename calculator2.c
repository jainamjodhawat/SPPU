#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,function,result;
    char c;

    do{
        printf("Calculator Menu \n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");

        printf("Enter operation no.");
        scanf("%d",&function);

        if(function==6)
        {
            printf("Exiting the calculator");
            break;
        }
        printf("Enter two numbers");
        scanf("%d %d", &num1,&num2);

        switch(function) {
            case 1:
                result = num1 + num2;
                printf("Result: %d + %d = %d\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %d - %d = %d\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %d * %d = %d\n", num1, num2, result);
                break;
            case 4:
                result = num1 / num2;
                printf("Result: %d / %d = %d\n", num1, num2, result);
            
                break;
            case 5:
                result = num1 % num2;
                printf("Result: %d %% %d = %d\n", num1, num2, result);
                
                break;
            default:
                printf("Invalid choice! Please choose a valid option (1-6).\n");
        }
    printf("Do you want to perform calculations again (y/n) \n ");
    scanf("%c",&c);

    }
 while(c=='y');
return 0;

}