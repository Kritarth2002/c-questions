#include<stdio.h>
int main()
{
    int y;
    scanf("%d",&y);
    /*if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
                printf("leap year");
            else printf("not a leap year");
        }
        else printf("leap year");
    }
    else printf("not a leap year");*/


            y=y%4==0?(y%100==0?(y%400==0?printf("leap"):printf("non leap")):printf("leap")):printf("non leap");







    return 0;
}
