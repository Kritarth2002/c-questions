#include<stdio.h>
int main()
{
    int i,s,sym,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=(n-i);s++)
        {
            printf(" ");
        }

        for(sym=1;sym<=2*i-1;sym++)
        {
            printf("*");
        }
        printf("\n");
    }



    for(i=1;i<=n;i++)
    {
        for(s=1;s<=i-1;s++)
        {
            printf(" ");
        }
        if(i==1)
            continue;
        else
        {
            for(sym=(2*n-(2*i-1));sym>=1;sym--)
        {

            printf("*");
        }
        }


        printf("\n");
    }
}
