#include <stdio.h>
#include <math.h>

int is_armstrong(int num) {
    int original_num = num;
    int digits = 0;
    int sum = 0;

    // count number of digits
    while (num != 0) {
        num /= 10;
        digits++;
    }

    num = original_num;
    // calculate sum of digits raised to the power of number of digits
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return original_num == sum;
}

int is_perfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_armstrong(num)) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    if (is_perfect(num)) {
        printf("%d is a perfect number\n", num);
    } else {
        printf("%d is not a perfect number\n", num);
    }

    return 0;
} 
