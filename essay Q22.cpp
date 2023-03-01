#include <stdio.h>

float calculate_bonus(float salary, char grade) {
    float bonus = 0;
    if (grade == 'A') {
        bonus = salary * 0.05;
    } else if (grade == 'B') {
        bonus = salary * 0.1;
    }
    if (salary < 10000) {
        bonus += salary * 0.02;
    }
    return salary + bonus;
}

int main() {
    float salary;
    char grade;

    printf("Enter salary: ");
    scanf("%f", &salary);
    printf("Enter grade (A/B): ");
    scanf(" %c", &grade);

    float bonus = calculate_bonus(salary, grade);
    printf("Total salary including bonus: $%.2f\n", bonus);

    return 0;
}



