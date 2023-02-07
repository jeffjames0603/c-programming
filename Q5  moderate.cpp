#include <stdio.h>

int main()
{
    int studentUsers, staffUsers, nonTeachingStaff;

    printf("Enter the number of student users: ");
    scanf("%d", &studentUsers);

    printf("Enter the number of staff users: ");
    scanf("%d", &staffUsers);

    nonTeachingStaff = staffUsers / 3;

    printf("\nTotal number of users: %d\n", studentUsers + staffUsers);
    printf("Number of non-teaching staff users: %d\n", nonTeachingStaff);

    return 0;
}
