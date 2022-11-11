#include<stdio.h>
int main()
{
    int i=1,sum=0,d1,d2,d3,m;
    while(i<=500)
    {
    d1=i%10;
    d2=i%100;
    d2=(d2-d1)/10;
    d3=i/100;
    sum=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
    if(sum==i)
        printf("%d no is armstrong \n",i);
    else printf("%d no is not a armstrong\n",i);
    i++;
    }
return 0;

}
