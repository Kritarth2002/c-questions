#include<stdio.h>
int main()
{
    int a,b,lcm;
    scanf("%d %d",&a,&b);
    if(a>b)
        lcm=a;
    else lcm=b;
    for(lcm;lcm<=a*b;lcm++)
        if(lcm%a==0&&lcm%b==0)
        break;
    printf("%d",lcm);
}
