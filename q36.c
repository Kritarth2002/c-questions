#include<stdio.h>
int main()
{
    int i,s,j,n;
    scanf("%d",&n);
    system("cls");
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        for(s=1;s<=((2*i)-1);s++)
        {
            if(i%2==0&&s%2!=0||i%2!=0&&s%2==0)
                printf(" 1 ");
        }
        printf("\n");
    }
}

