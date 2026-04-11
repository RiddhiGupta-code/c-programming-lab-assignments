#include <stdio.h>
#include <math.h>

int main() {
    int num, i, choice;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("1. Square root\n");
    printf("2. Square\n");
    printf("3. Cube\n");
    printf("4. Check Prime\n");
    printf("5. Factorial\n");
    printf("6. Prime Factors\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Square root = %.2f", sqrt(num));
            break;

        case 2:
            printf("Square = %d", num * num);
            break;

        case 3:
            printf("Cube = %d", num * num * num);
            break;

        case 4: {
            int isPrime = 1;
            if(num <= 1)
                isPrime = 0;
            else {
                for(i = 2; i <= num/2; i++) {
                    if(num % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }

            if(isPrime)
                printf("Number is Prime");
            else
                printf("Number is NOT Prime");
            break;
        }

        case 5:
            if(num < 0)
                printf("Factorial not defined for negative numbers");
            else {
                for(i = 1; i <= num; i++) {
                    fact *= i;
                }
                printf("Factorial = %lld", fact);
            }
            break;

        case 6:
            printf("Prime factors: ");
            for(i = 2; i <= num; i++) {
                while(num % i == 0) {
                    printf("%d ", i);
                    num /= i;
                }
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}