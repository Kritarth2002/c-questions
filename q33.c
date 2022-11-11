#include<stdio.h>
int main()
{
    int i,s,sym,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        for(sym=1;sym<=i;sym++)
        {
            if((i%2==0)&&(sym%2==0) || (i%2!=0)&&(sym%2!=0)|| i!=sym)
            printf("1 ");
        }
        printf("\n");
    }

}
