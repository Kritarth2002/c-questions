
#include<stdio.h>
#include<math.h>
int main()
{
    float d,a,b,x,y,r;
    scanf("%f %f %f %f %f",&x,&y,&a,&b,&r);
    printf("cordinates of centre (%f,%f)\n",x,y);
    printf("cordinates of point (%f,%f)\n",a,b);
    d=sqrt((a-x)*(a-x)+(b-y)*(b-y));
    printf("%f",d);
    if(d==r)
        printf("point lie on circle");
    else if (d>r)
        printf("point outside to circle");
    else printf("point lie inside");

    return 0;


}
