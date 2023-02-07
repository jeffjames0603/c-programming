#include <stdio.h>
#include <string.h>

struct student {
    int student_number;
    int number_grade;
    char letter_grade[2];
};

void calculate_letter_grade(struct student *s) {
    if (s->number_grade >= 90 && s->number_grade <= 100) {
        strcpy(s->letter_grade, "A");
    } else if (s->number_grade >= 78 && s->number_grade <= 89) {
        strcpy(s->letter_grade, "B");
    } else if (s->number_grade >= 65 && s->number_grade <= 77) {
        strcpy(s->letter_grade, "C");
    } else if (s->number_grade >= 50 && s->number_grade <= 64) {
        strcpy(s->letter_grade, "D");
    } else {
        strcpy(s->letter_grade, "F");
    }
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter student number and number grade for student %d: ", i + 1);
        scanf("%d%d", &students[i].student_number, &students[i].number_grade);
        calculate_letter_grade(&students[i]);
    }

    int count_A = 0, count_B = 0, count_C = 0, count_D = 0, count_F = 0;
    for (int i = 0; i < n; i++) {
        printf("Student number: %d\n", students[i].student_number);
        printf("Number grade: %d\n", students[i].number_grade);
        printf("Letter grade: %s\n", students[i].letter_grade);
        printf("\n");
        if (strcmp(students[i].letter_grade, "A") == 0) {
            count_A++;
        } else if (strcmp(students[i].letter_grade, "B") == 0) {
            count_B++;
        } else if (strcmp(students[i].letter_grade, "C") == 0) {
            count_C++;
        } else if (strcmp(students[i].letter_grade, "D") == 0) {
            count_D++;
        } else {
            count_F++;
        }
    }

    printf("Number of As: %d\n", count_A);
    printf("Number of Bs: %d\n", count_B);
    printf("Number of Cs: %d\n", count_C);
    printf("Number of Ds: %d\n", count_D);
    printf("Number of Fs: %d\n", count_F);

    return 0;
}



