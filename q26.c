#include<stdio.h>
int main()
{
    int i,n,j=0,sum=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {



        j=10*j+1;
        printf("%d\n",j);
        sum=sum+j;



    }
    printf("%d",sum);
}
