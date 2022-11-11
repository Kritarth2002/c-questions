#include<stdio.h>
#include<math.h>
int main()
{
    float w,h,bmi;
    printf("enter your weight(kg) and height(m):");
    scanf("%f %f",&w,&h);
    bmi=w/pow(h,2);
    printf("your bmi is %f",bmi);
    if(bmi<15)
        printf("startvation");
    else if(bmi>15.1&&bmi<17.5)
        printf("anorexic");
    else if(bmi>17.6&&bmi<18.5)
        printf("underweight");
    else if(bmi>18.6&&bmi<24.9)
        printf("ideal");
    else if(bmi>25&&bmi<25.9)
        printf("overweight");
    else if(bmi>30&&bmi<30.9)
        printf("obese");
    else if(bmi>=40)
        printf("morbidly obese");
    }
