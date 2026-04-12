#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *dest;
    char ch;

    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("File not found\n");
        exit(0);
    }

    dest = fopen("dest.txt", "w");
    if (dest == NULL) {
        printf("File not open\n");
        exit(0);
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully\n");

    fclose(source);
    fclose(dest);

    return 0;
}