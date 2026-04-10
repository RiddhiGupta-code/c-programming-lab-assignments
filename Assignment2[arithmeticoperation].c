#include <stdio.h>

int main() {
    int a,b,choice;
    float c,d;
    printf("Enter numbers");
    scanf("%d%d%f%f",&a,&b,&c,&d);
    printf("Enter choice");
    scanf("%d",&choice);

        switch (choice) {
            case 1:
                printf("The addition of two numbers is %d",a+b);
                break;

            case 2:
                printf("The subtraction of two numbers is %d",a-b);
                break;

            case 3:
                printf("The multiplication of two numbers is %d", a*b);
                break;

            case 4:
                if (c != 0 ||d!=0) {
                    printf("The division of two numbers is %f", c/d);
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                }
                break;

            case 5:
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    

    return 0;
}