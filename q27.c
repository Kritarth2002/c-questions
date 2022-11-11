#include<stdio.h>
int main()
{
    int i,j,n,sum=0;
    scanf("%d",&n);
    system ("cls");
    printf("the divisors are ");
    for(i=1;i<=n;i++)
    {
        if(n%i==0&&n!=i)
        {

           printf("%d\n",i);
        sum=sum+i;
        }


    }
    printf("sum of divisors %d\n",sum);
if(sum==n)
            printf("the number is a perfect number ");
        else printf("the number is not a perfect number");
}
