#include <stdio.h>

struct Employee {
    char Name[10];
    char Designation[10];
    char Gender[10];
    int Date_of_joining;
    float Salary;
} E[10];

int main()
{
    int Total = 0, Male = 0, Female = 0, i;

    printf("Enter total number of employees:\n");
    scanf("%d", &Total);

    // Input Names
    for (i = 0; i < Total; i++)
    {
        printf("Enter employee name: ");
        scanf("%s", E[i].Name);
    }

    printf("Employee names: ");
    for (i = 0; i < Total; i++)
    {
        printf("%s ", E[i].Name);
    }

    // Input Designation
    for (i = 0; i < Total; i++)
    {
        printf("\nEnter employee designation: ");
        scanf("%s", E[i].Designation);
    }

    printf("Employee Designation: ");
    for (i = 0; i < Total; i++)
    {
        printf("%s ", E[i].Designation);
    }

    // Input Gender
    for (i = 0; i < Total; i++)
    {
        printf("\nEnter employee gender: ");
        scanf("%s", E[i].Gender);
    }

    printf("Employee Gender: ");
    for (i = 0; i < Total; i++)
    {
        printf("%s ", E[i].Gender);
    }

    // Input Date of Joining
    for (i = 0; i < Total; i++)
    {
        printf("\nEnter date of joining: ");
        scanf("%d", &E[i].Date_of_joining);
    }

    printf("Date of joining: ");
    for (i = 0; i < Total; i++)
    {
        printf("%d ", E[i].Date_of_joining);
    }

    // Input Salary
    for (i = 0; i < Total; i++)
    {
        printf("\nEnter salary: ");
        scanf("%f", &E[i].Salary);
    }

    printf("Salary: ");
    for (i = 0; i < Total; i++)
    {
        printf("%f ", E[i].Salary);
    }

    return 0;
}