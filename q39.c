#include<stdio.h>
int main()
{
    int n,n1,n2,sum=0;
    scanf("%d %d",&n1,&n2);
    for(n=n1;n<=n2;n++)
    {
        if(n%9==0)
        {
               printf("%d\t",n);
        sum=sum+n;
        }

    }
    printf("%d",sum);
}
