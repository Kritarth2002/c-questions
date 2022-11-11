#include<stdio.h>
#include<math.h>
int main()
{
    int x,i,n,sum=0,m;
    scanf("%d",&x);
     scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       m=pow(x,2*i-1);
       if(i%2==0)
        m=(-1)*m;
        printf("%d\n",m);
        sum=sum+m;
    }
    printf("%d",sum);

}
