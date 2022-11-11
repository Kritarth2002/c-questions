#include<stdio.h>
int main()
{
    int i,n,s,sym;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
          printf(" ");
        }

       for(sym=1;sym<=i;sym++)
       {
           printf("%d ",i);
       }
       printf("\n");
    }
}
