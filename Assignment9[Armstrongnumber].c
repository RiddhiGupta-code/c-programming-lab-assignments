#include<stdio.h>
void main()
{
    int num,digit,temp,sum;
    printf("Enter num");
    scanf("%d",&num);
    temp=num;
    sum=0;
    while(temp!=0)
    {
        digit=temp%10;
        sum=sum+(digit*digit*digit);
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("num is armstrong");
    }
    else{
        printf("num is not armstrong");
    }
}