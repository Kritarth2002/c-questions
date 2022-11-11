#include<stdio.h>
int main()
{
    int m,r,sum=0;
    scanf("%d",&m);
    for(; m!=0;)
    {
        r=m%10;
        sum=sum*10+r;
        m=m/10;

    }
    printf("%d",sum);

}

