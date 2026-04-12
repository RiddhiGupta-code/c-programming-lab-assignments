#include<stdio.h>
#include<math.h>
long factorial(int n){
    if(n==0||n==1) return 1;
    return n*factorial(n-1);
}
int main() {
    int i,n;
    float sum=0,x;
    printf("Enter value of x: ");
    scanf("%f",&x);
    printf("Enter number of terms: ");
    scanf("%d",&n);
    int sign=1;
    for(i=1;i<=n;i++){
        int power = 2*i-1;
        sum = sum + sign*pow(x,power)/factorial(power);
        sign=-sign;
    }
    printf("Sum of sine series=%f\n",sum);
    return 0;
}
