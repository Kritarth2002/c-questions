#include<stdio.h>
int main()
{
    int a,n,d,l,i,sum=0;;
    scanf("%d %d %d",&a,&n,&d);
    printf("The Sum of the A.P. series are :");
    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
           printf("%d",a);
            sum=1;
        }

        else
        {
            l=a+(i-1)*d;
            sum=sum+l;
            printf("+%d",l);
        }



    }
     printf("=%d",sum);
}
