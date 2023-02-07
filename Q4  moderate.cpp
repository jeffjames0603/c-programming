#include <stdio.h>

int main()
{
    int m, n, i;
    int countEven = 0;

    printf("Enter two numbers (M and N): ");
    scanf("%d%d", &m, &n);

    printf("All odd numbers between M and N are: \n");
    for (i = m; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
        else
        {
            countEven++;
        }
    }

    printf("\nTotal number of even numbers between M and N: %d", countEven);

    return 0;

