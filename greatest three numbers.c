#include<stdio.h>
int main()
{
    int a,b,c,great;
    scanf("%d %d %d",&a,&b,&c);
    great=a>b?(a>c?a:c):(b>c?b:c);
    printf("great no is %d",great);
    return 0;
}
