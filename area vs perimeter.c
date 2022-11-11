#include<stdio.h>
int main()
{
    float l,b,p,a;
    scanf("%f %f",&l,&b);
   p=2*(l+b);
   a=l*b;
   printf("perimeter is %f\n",p);
   printf("area is %f \n",a);
   if(a>p)
    printf("area is greater than perimeter\n");
else printf("perimeter is greater");

    return 0;


}
