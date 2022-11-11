#include<stdio.h>
int main()
{
    int x,y,power=1,i=1,m;
    scanf("%d %d",&x,&y);
   while(i<=y)
 {
     power=power*x;
   i++;
 }


    printf("result is %d",power);
}
