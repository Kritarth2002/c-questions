#include<stdio.h>
int main()
{
    int i,n,m,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=2*i-1;
            printf("%d \t",m);
        sum=sum+m;
    }
    printf("sum is %d",sum);
}
