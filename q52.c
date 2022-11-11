#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float a,n,r,l,sum=0;
    scanf("%f %f %f",&a,&n,&r);
    printf("The Sum of the G.P. series are :");
    for(i=1; i<=n; i++)
    {
            l=a*pow(r,i-1);
            printf("%f ",l);
            sum=sum+l;
    }
    printf("=%f",sum);
}

