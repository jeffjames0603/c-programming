#include <stdio.h>

struct student {
    int marks[4];
    int total;
    float aggregate;
    char grade[20];
};

void calculate_total_aggregate_and_grade(struct student *s) {
    s->total = 0;
    for (int i = 0; i < 4; i++) {
        s->total += s->marks[i];
    }
    s->aggregate = (float) s->total / 4;
    if (s->aggregate >= 75) {
        strcpy(s->grade, "Distinction");
    } else if (s->aggregate >= 60 && s->aggregate < 75) {
        strcpy(s->grade, "First Division");
    } else if (s->aggregate >= 50 && s->aggregate < 60) {
        strcpy(s->grade, "Second Division");
    } else if (s->aggregate >= 40 && s->aggregate < 50) {
        strcpy(s->grade, "Third Division");
    } else {
        strcpy(s->grade, "Fail");
    }
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter marks of student %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &students[i].marks[j]);
        }
        calculate_total_aggregate_and_grade(&students[i]);
    }

    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("Total marks of student %d: %d\n", i + 1, students[i].total);
        printf("Aggregate marks of student %d: %.2f\n", i + 1, students[i].aggregate);
        printf("Grade of student %d: %s\n", i + 1, students[i].grade);
        printf("\n");
    }

    return 0;
}



