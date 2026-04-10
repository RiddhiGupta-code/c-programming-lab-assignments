#include <stdio.h>

int main() {
    int choice;

    printf("\nMENU:\n");
    printf("1. Addition of two matrices\n");
    printf("2. Saddle point of a matrix\n");
    printf("3. Inverse of a 2x2 matrix\n");
    printf("4. Check Magic Square\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

    case 1: {
        int a[10][10], b[10][10], sum[10][10];
        int r, c, i, j;

        printf("Enter rows and columns: ");
        scanf("%d %d", &r, &c);

        printf("Enter first matrix:\n");
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                scanf("%d",&a[i][j]);

        printf("Enter second matrix:\n");
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                scanf("%d",&b[i][j]);

        for(i=0;i<r;i++) {
            for(j=0;j<c;j++) {
                sum[i][j] = a[i][j] + b[i][j];
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
        break;
    }

    case 2: {
        int a[10][10], r, c, i, j, k, min, col;

        printf("Enter rows and columns: ");
        scanf("%d %d", &r, &c);

        printf("Enter matrix:\n");
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                scanf("%d",&a[i][j]);

        int found = 0;

        for(i=0;i<r;i++) {
            min = a[i][0];
            col = 0;

            for(j=1;j<c;j++) {
                if(a[i][j] < min) {
                    min = a[i][j];
                    col = j;
                }
            }

            for(k=0;k<r;k++) {
                if(a[k][col] > min)
                    break;
            }

            if(k == r) {
                printf("Saddle Point = %d\n", min);
                found = 1;
            }
        }

        if(!found)
            printf("No Saddle Point found\n");

        break;
    }

    case 3: {
        float a[2][2], det;

        printf("Enter 2x2 matrix:\n");
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                scanf("%f",&a[i][j]);

        det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

        if(det == 0) {
            printf("Inverse not possible\n");
        } else {
            printf("Inverse matrix:\n");
            printf("%.2f %.2f\n", a[1][1]/det, -a[0][1]/det);
            printf("%.2f %.2f\n", -a[1][0]/det, a[0][0]/det);
        }
        break;
    }

    case 4: {
        int a[10][10], n, i, j;
        int sum, diag1=0, diag2=0;
        int isMagic = 1;

        printf("Enter size of square matrix: ");
        scanf("%d",&n);

        printf("Enter matrix:\n");
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);

        sum = 0;
        for(j=0;j<n;j++)
            sum += a[0][j];

        for(i=1;i<n;i++) {
            int rowSum = 0;
            for(j=0;j<n;j++)
                rowSum += a[i][j];
            if(rowSum != sum)
                isMagic = 0;
        }

        for(j=0;j<n;j++) {
            int colSum = 0;
            for(i=0;i<n;i++)
                colSum += a[i][j];
            if(colSum != sum)
                isMagic = 0;
        }

        for(i=0;i<n;i++) {
            diag1 += a[i][i];
            diag2 += a[i][n-i-1];
        }

        if(diag1 != sum || diag2 != sum)
            isMagic = 0;

        if(isMagic)
            printf("It is a Magic Square\n");
        else
            printf("Not a Magic Square\n");

        break;
    }

    default:
        printf("Invalid choice!\n");
    }

    return 0;
}