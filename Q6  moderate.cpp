#include <stdio.h>

float simpleInterest(float p, float r, float t) {
    return (p * r * t) / 100;
}

int main()
{
    float principal, rate, time, interest;
    int age;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 60) {
        rate = 12.0;
    } else {
        rate = 10.0;
    }

    interest = simpleInterest(principal, rate, time);

    printf("Simple Interest: %.2f", interest);

    return 0;
}

