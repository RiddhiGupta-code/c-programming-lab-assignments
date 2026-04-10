#include <stdio.h>

struct Student {
    char name[50];
    int rollno;
    float marks[3];
    float total;
    float percentage;
};

int main() {
    struct Student s[10];
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].rollno);

        printf("Enter marks of 3 subjects:\n");
        s[i].total = 0;

        for(j = 0; j < 3; j++) {
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 3;
    }

    printf("\n--- Student Results ---\n");

    for(i = 0; i < n; i++) {
        printf("\nName: %s", s[i].name);
        printf("\nRoll No: %d", s[i].rollno);
        printf("\nTotal Marks: %.2f", s[i].total);
        printf("\nPercentage: %.2f%%\n", s[i].percentage);
    }

    return 0;
}