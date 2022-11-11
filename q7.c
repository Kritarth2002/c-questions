#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    system("cls");
    for(i=1; i<=10; i++)
    {
       for(j=1;j<=n;j++)
       {
           if(j<=n)
            printf("%dx%d=%d",j,i,j*i);
       }
       printf("\n");
    }


    return 0;
}
