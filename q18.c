#include<stdio.h>
#include<math.h>
int main()
{
    float x,n,sum=0,m,den,fact,num;
    int i,j;
    scanf("%f",&x);
    scanf("%f",&n);
    for(i=1; i<=n; i++)
    {
        num=pow(x,2*(i-1));

        if(i%2==0)
        {
            num=(-1)*num;

        }
        fact=2*(i-1);
             den=1;
        if(i==1)
            den=1;
        else
        {
            for(j=fact; j>=1; j--)
            {

                den=den*j;

            }
        }




        printf("num is %f\n",num);
        printf("den is %f\n",den);
        sum=sum+(num/den);
    }

printf("%f",sum);


}


