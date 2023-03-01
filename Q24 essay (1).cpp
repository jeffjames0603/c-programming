#include <stdio.h>
#include <string.h>

int is_anagram(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) {
        return 0;
    }

    int char_count[26] = {0};
    for (int i = 0; i < len1; i++) {
        char_count[str1[i] - 'a']++;
        char_count[str2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (char_count[i] != 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str1[100];
    char str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (is_anagram(str1, str2)) {
        printf("Strings are anagrams\n");
    } else {
        printf("Strings are not anagrams\n");
    }

    return 0;
}
