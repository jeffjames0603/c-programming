

#include <stdio.h>
#include <math.h>

double factorial(int n) {
double result = 1;
for (int i = 1; i <= n; i++) {
result *= i;
}
return result;
}

int main() {
int n = 5;
double sum = 0;
for (int i = 1; i <= n; i++) {
sum += factorial(i) / i;
}
printf("The sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 is %f\n", sum);
return 0;
}
