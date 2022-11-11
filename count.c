#include<stdio.h>
int main()
{
    int pos,neg,zero,n;
    char ans='y';
    pos=neg=zero=0;
    while(ans=='y'||ans=='Y')
    {
        scanf("%d",&n);
        if(n==0)
            zero++;
        if(n>0)
          pos++;
          if(n<0)
            neg++;
          fflush(stdin);
          printf("do you want to continue");
          scanf("%c",&ans);
    }

printf("%d\n",pos);
    printf("%d\n",neg);
    printf("%d\n",zero);
    return 0;
}
