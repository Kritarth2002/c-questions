
#include<stdio.h>
int main()
{
    int r,s,a,m;
    scanf("%d %d %d",&r,&s,&a);
    if(r<s)
      {
          if(r<a)
            printf("ram");
            else printf("ajay");
      }

    else
    {
        if(s<a)
            printf("shyam");
        else printf("ajay");
    }
    return 0;


}
