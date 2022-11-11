#include<stdio.h>
int main()
{
    int a,b,c,sum,longside;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c){
           sum=b+c;
        longside=a;
        }
        else
            {
            sum=a+b;
            longside=c;
            }
    }
    else if(b>c)
    {
         sum=a+c;
        longside=b;

    }

    else  {sum=a+b;
            longside=c;
    }
            if(sum>longside)
                printf("triangle is valid");
            else printf("triangle is not valid");
    return 0;
}
