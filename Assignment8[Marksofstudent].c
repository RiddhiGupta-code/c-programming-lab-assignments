#include <stdio.h>

int main() {
    int marks[5];
    int i;
    int pass = 1;
    float total = 0, percentage;

    // Input marks
    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        // Check pass condition
        if(marks[i] < 40) {
            pass = 0;
        }

        total += marks[i];
    }

    // Check result
    if(pass == 0) {
        printf("\nResult: FAIL\n");
    } else {
        percentage = total / 5;

        printf("\nTotal = %.2f", total);
        printf("\nPercentage = %.2f%%", percentage);

        // Grade calculation
        if(percentage >= 75) {
            printf("\nGrade: Distinction");
        } 
        else if(percentage >= 60) {
            printf("\nGrade: First Division");
        } 
        else if(percentage >= 50) {
            printf("\nGrade: Second Division");
        } 
        else if(percentage >= 40) {
            printf("\nGrade: Third Division");
        }
    }

    return 0;
}