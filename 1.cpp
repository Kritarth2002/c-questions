#include<stdio.h>
#include<math.h>
int main()
{
int a,b,m;
scanf("%d %d",&a,&b);
m=a;
a=b;
b=m;
printf("%d %d",a,b);
    return 0;
}
