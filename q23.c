#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,x;
    float sum=0,num,den=1;
    scanf("%d",&n);
    scanf("%d",&x);
    system("cls");
    for(i=0; i<n; i++)
    {
        num=pow(x,i);
        den=1;
       if(i==0)
        den=1;
       else
       {
           for(j=i;j>=1;j--)
           {
               den=den*j;
           }

       }
      sum=sum+(num/den);
    }
    printf("%f",sum);
    return 0;
}

