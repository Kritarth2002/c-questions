#include<stdio.h>
int main()
{
    int i,n,z,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        z=i*i;
       sum=sum+z;
       printf("%d\n",z);
    }
    printf("\n");
    printf("%d\n",sum);
}
