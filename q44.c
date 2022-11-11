
#include<stdio.h>
int main()
{
    int m,n,hcf,lcm,a,b;
    scanf("%d %d",&m,&n);
    a=m;
    b=n;
    for(;m!=n;)
    {
        if(m>n)
            m=m-n;
        else if(n>m)
          n=n-m;

    }
    hcf=m;
    lcm=a*b/hcf;
    printf("%d",lcm);


}
