#include<stdio.h>
int main()
{
    int i,n,j=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {

        if(n%i==0)
            j++;
    }
    if(j==2)
        printf("%d is a prime number ",n);
    else printf("%d is not a prime number ",n);

}

