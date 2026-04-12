#include<stdio.h>
#include<stdlib.h>
int main(){
    int num1,num2,scd,gcd,ch,i;
    printf("enter num1");
    printf("enter num2");
    printf("enter choice");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&ch);
    num1=abs(num1);
    num2=abs(num2);
    switch(ch)
    {
        case 1:
        for(i=2;i<=num1 && i<=num2;i++)
        {
            if(num1%i==0 && num2%i==0)
            {
                scd=i;
                break;
            }
        }
        if(scd==-1){
            printf("No common divisor");
        }
        else{
            printf("scd=%d",scd);
        }
        break;
        case 2:
        for(i=1;i<=num1 && i<=num2;i++){
            if(num1%i==0 && num2%i==0){
                gcd=i;
            }
        }
        printf("gcd is %d",gcd);
        break;
        default :
        printf("invalid choice");
    }
    return 0;

}