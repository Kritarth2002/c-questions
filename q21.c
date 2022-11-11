#include<stdio.h>
#include<math.h>
int main()
{
    /*int n,i;
    float a,b,sum=0,j;
    scanf("%d",&n);
    j=n;
    a=pow(10,n+1)/9.0;
    b=1/pow(10,n-2);
    sum=a-b-j;
    printf("%f",sum);
    */
    int i,n,j=0,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        j=j*10+9;
        if(i==n)
            printf("%d\n",j);
        else printf("%d+",j);
        sum=sum+j;

    }
   printf("%d",sum);
}
