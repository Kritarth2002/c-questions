#include<stdio.h>
int main()
{
    int n,n1,n2,sum=0,m,c,r;
    printf("enter starting range");
    scanf("%d",&n1);
    printf("enter last range");
    scanf("%d",&n2);
    system("cls");
    for(n=n1;n<=n2;n++)
    {
        sum=0;
        m=n;
        for(;m!=0;)
        {
            r=m%10;
            c=r*r*r;
            m=m/10;
            sum=sum+c;

        }
   if(sum==n)
            printf("%d\t",sum);

    }

}
