#include<stdio.h>
#include<math.h>
int main()
{
    int n,oct=0,r,i=0;
    printf("enter the no");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%8;
        oct=oct+r*pow(10,i);
        n=n/8;
        i++;

    }
printf("octal equivalent is %d",oct);
}
