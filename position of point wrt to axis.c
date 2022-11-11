
#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
    scanf("%f %f",&x,&y);
    printf("cordinates of point (%f,%f)\n",x,y);
    if(x==0&&y==0)
        printf("point is on origin");
    else if(y==0)
        printf("point is on x axis");
    else if(x==0)
        printf("point is on y axis");
else printf("point is niether in axis nor at origin");

    return 0;


}
