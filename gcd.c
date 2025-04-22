#include <stdio.h>
#include<conio.h>

int main() {
    int num1, num2;
    
    printf("Enter two integers");
    scanf("%d %d", &num1, &num2);
    
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2; 
        num1 = temp;          
    }
    
    // Display the result
    printf("The GCD is: %d\n", num1);
    
    return 0;
}
