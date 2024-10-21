#include <stdio.h>
#include <math.h>
#include<conio.h>
// Simple Interest
float simple_interest(float p, float r, float t) {
    return (p * r * t) / 100;
}

// Compound Interest
float compound_interest(float p, float r, float t) {
    return p * pow((1 + r / 100), t);
}

int main() {
    float p, r, t, si, ci;

    printf("Enter the principal amount: ");
    scanf("%f", &p);

    printf("Enter the rate of interest: ");
    scanf("%f", &r);

    printf("Enter the time in years: ");
    scanf("%f", &t);

    si = simple_interest(p, r, t);
    printf("Simple Interest = Rs. %.2f\n", si);

    ci = compound_interest(p, r, t);
    printf("Compound Interest = Rs. %.2f\n", ci);
getch();
    return 0;
}