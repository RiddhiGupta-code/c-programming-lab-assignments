#include<stdio.h>
void main()
{
    long long binary;
    int decimal=0,base=1,remainder;
    printf("Enter binary number: ");
    scanf("%lld",&binary);
    while(binary>0){
        remainder=binary%10;
        decimal=decimal+remainder*base;
        binary=binary/10;
        base=base*2;

    }
    printf("decimal number=%d",decimal);
}