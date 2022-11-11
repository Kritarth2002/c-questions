#include<stdio.h>
int main()
{
    int i,n;
    float sum=0,j;
    scanf("%d",&n);
    system("cls");
    for(i=1;i<=n;i++)
    {
        j=i;
        sum=sum+(1/j);
        if(i==n)
        printf("1/%d\n",i);
        else printf("1/%d + ",i);
    }
    printf("%f\n",sum);
}
