#include<stdio.h>
int main()
{
    int n,r,m,c,sum=0;
    scanf("%d",&n);
    m=n;
    for(;n!=0;n=n/10)
    {
        r=n%10;
    c=r*r*r;
    sum=sum+c;
    }
    if(sum==m)
        printf("the %d is an armstrong number ",m);
    else printf("the %d is not an armstrong number ",m);

}
