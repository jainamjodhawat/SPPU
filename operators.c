 #include<conio.h>
 #include<math.h>
 #include<stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d %d", &a,&b);
//Arithmetic operator
printf("Arithmetic operator\n");
    printf("a + b = %d\n", a + b); //Addition
    printf("a - b = %d\n", a - b); //Subtraction
    printf("a * b = %d\n", a * b); //Multiplication
    printf("a / b = %d\n", a / b); //Division
    printf("a % b = %d\n", a % b); //Modulus
    printf("a++ = %d\n", a++);     //Increment : increments by 1
    printf("a-- = %d\n", a--);     //Decrement : decrements by 1
//Relational operator
printf("Relational operator\n");
    printf("a < b  : %d\n", a < b); //Returns 1 if a is smaller than b
    printf("a > b  : %d\n", a > b); //Returns 1 if b is smaller than a
    printf("a <= b: %d\n", a <= b); //Returns 1 if a is smaller than or equal to b
    printf("a >= b: %d\n", a >= b); //Returns 1 if b is smaller than or equal to a
    printf("a == b: %d\n", a == b); //Returns 1 if a is equal to b
    printf("a != b : %d\n", a != b);//Returns 1 if a is not equal to b
//Logical operator
printf("Logical operator\n");
    printf("a && b : %d\n", a && b); //Performs logical AND
    printf("a || b : %d\n", a || b); //Performs Logical OR
    printf("!a: %d\n", !a);          //Performs Logical NOT
//Bitwise operator
printf("Bitwise operator\n");
    printf("a & b: %d\n", a & b);    //Performs bit by bit AND operation and returns the result.	
    printf("a | b: %d\n", a | b);    //Performs bit by bit OR operation and returns the result.	
    printf("a ^ b: %d\n", a ^ b);    //Performs bit by bit EX-OR operation and returns the result.	
//Assingment operator
printf("Assingment operator\n");
    printf("a = b: %d\n", a = b);    //Assign the value of the right operand to the left operand.
    printf("a += b: %d\n", a += b);  //Adds and assign this value to the left operand.
    printf("a -= b: %d\n", a -= b);  //Subtracts and assign this value to the left operand.
    printf("a *= b: %d\n", a *= b);  //Multiplies and assign this value to the left operand.
    printf("a /= b: %d\n", a /= b);  //Divides and assign this value to the left operand.
    printf("a %= b: %d\n", a %= b);  //Assign the remainder in the division to the left operand.
     getch();
    return 0;
}