

#include<stdio.h>
int main()
{
    float a,x1,x2,x3,y1,y2,y3;
    scanf("%f %f %f %f %f %f",&x1,&x2,&x3,&y1,&y2,&y3);
    printf("coordinates are (%f,%f)\n",x1,y1);
     printf("coordinates are (%f,%f)\n",x2,y2);
      printf("coordinates are (%f,%f)\n",x3,y3);
      a=x1*(y2-y3)-y1*(x2-x3)+(x2*y3-x3*y2);
      printf("%f",a);
      if (a==0)
        printf("three points lie on a line");
      else printf("three po");

    return 0;


}

