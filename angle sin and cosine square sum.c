#include<stdio.h>
#include<math.h>
int main()
{
    float angle,b;
    scanf("%f",&angle);
    angle=angle*3.14/180;
    b=pow(sin(angle),2)+pow(cos(angle),2);
    if(b==1)
        printf("identity is checked");
    else printf("identity is not valid");
    printf("%f",b);
}
