#include<stdio.h>
#include<conio.h>

int main() {
    float percentage;
    printf("Enter your percentage");
    scanf("%f",&percentage);
    if(percentage>=70) {
          printf("Distinction"); }
            else if(percentage < 70 && percentage >= 60) 
               { printf("First class"); }
                    else if (percentage < 60 && percentage>= 40)
                       { printf("Second class"); }
                            else
                                { printf("Failed"); }
                 
getch();   
return 0;
}
