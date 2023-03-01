

#include <stdio.h>

double mean(int n, int type) {
int i;
double sum = 0;
for (i = 1; i <= n; i++) {
if (type == 1) {
sum += 2 * i - 1;
} else if (type == 2) {
sum += 2 * i;
} else if (type == 3) {
sum += i * i;
} else if (type == 4) {
sum += i * i * i;
}
}
return sum / n;
}

int main() {
int n;
printf("Enter the value of n: ");
scanf("%d", &n);
printf("The mean of the first %d odd numbers is: %.2lf\n", n, mean(n, 1));
printf("The mean of the first %d even numbers is: %.2lf\n", n, mean(n, 2));
printf("The mean of the first %d square numbers is: %.2lf\n", n, mean(n, 3));
printf("The mean of the first %d cube numbers is: %.2lf\n", n, mean(n, 4));
return 0;
}
