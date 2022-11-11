#include<stdio.h>
int main()
{
    int i,n,n1,n2,j=0;
    scanf("%d%d",&n1,&n2);
    for(n=n1; n<=n2; n++)
    {
        j=0;
        for(i=1; i<=n; i++)
        {

            if(n%i==0)
                j++;

        }
        if(j==2)
            printf("%d\n",n);

    }
}
