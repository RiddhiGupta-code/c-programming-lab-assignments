#include<stdio.h>
void main(){
    int a,b,*j;
    a=10;
    b=20;
    j=&a;
    *j=a;
    a=b;
    b=*j;
    printf("swaped values: %d",a);
}