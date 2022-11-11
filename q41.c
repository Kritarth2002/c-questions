#include<stdio.h>
int main()
{
    int n,m,r,sum=0,fact=1,k;
    scanf("%d",&n);
    for(;n!=0;)
    {
        r=n%10;
        n=n/10;

        for(k=(r-1);k>=1;k--)
        {
           fact=r*k;
         printf("%d= %d\n",k,fact);
        }

    }

}
