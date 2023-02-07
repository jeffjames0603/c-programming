#include <stdio.h>

int main() {
    int a=0, b=0, c = 0;
    int m = 2,n;
    int limit;
    printf("enter limit");
    scanf("%d",&limit);
    
    while (c < limit) {
 
        
        for (n = 1; n < m; ++n) {
 
            a = m * m - n * n;
            b = 2 * m * n;
            c = m * m + n * n;
 
            if (c > limit)
                break;
 
            printf("%d %d %d\n", a, b, c);
        }
        m++;
    }
     return 0;
} 

