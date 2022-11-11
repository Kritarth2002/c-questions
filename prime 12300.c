#include<stdio.h>
int main()
{
    int n=1,i;

    for(n=1;n<=300;n++)
    {
        for(i=1;i<=n;i++)
    {
        if(n%i==0)
        printf("%d is a prime number ",n);
    else printf("%d is not a prime number ",n);
    }
    }


}
