#include<stdio.h>
int main()
{
    int n,i,sum=0;
    for(i=1;i<=10;i++)
    {
     scanf("%d",&n);
     sum=sum+n;
    }
    printf("the sum upto %d is %d ",n,sum);
    printf("average is %d",sum/10);
    return 0;
}

