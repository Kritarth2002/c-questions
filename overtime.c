#include<stdio.h>
int main()
{
    float otpay,i=1;
    int hour;
    while(i<=10)
    {
        scanf("%d",&hour);
    if(hour>=40)
        otpay=(hour-40)*12;
    else otpay=0;
    printf("hours %d otpay %f",hour,otpay);
    }

    return 0;
}
