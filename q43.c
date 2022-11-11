#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    for(;m!=n;)
    {
        if(m>n)
            m=m-n;
        else if(n>m)
          n=n-m;

    }
    if(m==n)
        printf("%d",m);
}
