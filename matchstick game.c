#include<stdio.h>
int main()
{
    int m=21,p,c;

    while(1)
    {
        printf("matches left %d\n",m);
        printf("you can pick only 1,2,3,4 matches\n ");
        scanf("%d",&p);
        if(p<1||p>4)
            continue;
        m=m-p;
        printf("matches left after your choice %d\n",m);
        c=5-p;
        printf("computer picked %d \n",c);
        m=m-c;

        if(m==1)
            printf("computer win the game");

    }

        return 0;
}

