#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], rev[100];
    int choice, i, length;

    do {
        printf("\n----- STRING OPERATIONS MENU -----\n");
        printf("1. Length of string\n");
        printf("2. Reverse string\n");
        printf("3. Compare two strings\n");
        printf("4. Check palindrome\n");
        printf("5. Check substring\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        getchar(); // clear buffer

        switch(choice) {

        case 1:
            printf("Enter a string: ");
            fgets(str1, sizeof(str1), stdin);
            length = strlen(str1) - 1; // remove newline
            printf("Length = %d\n", length);
            break;

        case 2:
            printf("Enter a string: ");
            fgets(str1, sizeof(str1), stdin);
            length = strlen(str1) - 1;

            for(i = 0; i < length; i++) {
                rev[i] = str1[length - i - 1];
            }
            rev[length] = '\0';

            printf("Reversed string: %s\n", rev);
            break;

        case 3:
            printf("Enter first string: ");
            fgets(str1, sizeof(str1), stdin);
            printf("Enter second string: ");
            fgets(str2, sizeof(str2), stdin);

            if(strcmp(str1, str2) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;

        case 4:
            printf("Enter a string: ");
            fgets(str1, sizeof(str1), stdin);
            length = strlen(str1) - 1;

            int isPalindrome = 1;
            for(i = 0; i < length / 2; i++) {
                if(str1[i] != str1[length - i - 1]) {
                    isPalindrome = 0;
                    break;
                }
            }

            if(isPalindrome)
                printf("Palindrome\n");
            else
                printf("Not a palindrome\n");
            break;

        case 5:
            printf("Enter main string: ");
            fgets(str1, sizeof(str1), stdin);
            printf("Enter substring: ");
            fgets(str2, sizeof(str2), stdin);

            if(strstr(str1, str2) != NULL)
                printf("Substring found\n");
            else
                printf("Substring not found\n");
            break;

        case 6:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}