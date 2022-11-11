#include<stdio.h>
int main()
{
    int n,m,r,sum=0;
    scanf("%d",&n);
    m=n;
    for(;n!=0;)
    {
        r=n%10;
        n=n/10;
        sum=sum*10+r;
    }
    if(m==sum)
        printf("the %d is a palindrome number ",sum);
    else printf("the %d is not a palindrome number ",sum);
}
