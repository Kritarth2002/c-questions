#include<stdio.h>
int main()
{
    int i,s,sym,n;
    scanf("%d",&n);
    system("cls");
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        for(sym=1;sym<=i;sym++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
