#include<stdio.h>
int main()
{
    int i,mn,mx,n,sum;
    scanf("%d %d",&mn,&mx);
    for(n=mn;n<=mx;n++)
    {
        sum=0;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
                sum=sum+i;
        }

        if(n==sum)
            printf("%d\n",n);
    }
    printf("\n");
}
