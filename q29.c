#include<stdio.h>
int main()
{
    int n,m,c,i,r,sum=0;
    scanf("%d",&n);
    m=n;
   for(;n>0;)
   {
       r=n%10;
       c=r*r*r;
       sum=sum+c;
       n=n/10;
   }
   if(sum==m)
    printf("%d is an armstrong number",m);
   else
    printf("%d is not an armstrong number",m);



}
