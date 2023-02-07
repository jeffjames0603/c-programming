#include <stdio.h>
#include <string.h>

int countVowels(char *str) {
    int i, count = 0;
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        switch (str[i]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                count++;
                break;
            default:
                break;
        }
    }
    return count;
}

int main() {
    char str[100];
    int vowels;

    printf("Enter a statement: ");
    scanf("%[^\n]s", str);

    vowels = countVowels(str);
    printf("Number of vowels in the statement: %d\n", vowels);

    return 0;

