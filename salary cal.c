#include<stdio.h>
int main()
{
    char g;
    int yos,qual,salary;
    printf("enter the gender year of service and qualification(0=g,1=pg)");
    scanf("%c%d%d",&g,&yos,&qual);
    if(g=='m'&& yos>=10 && qual==1)
        salary=15000;
    else if((g=='m'&&yos>=10&&qual==0)||(g=='m'&&yos<10&&qual==1))
        salary=10000;
    else if(g=='m'&&yos<10&&qual==0)
        salary=7000;
    else if(g=='f'&&yos>=10&&qual==1)
        salary=12000;
    else if(g=='f'&&yos>=10&&qual==0)
        salary=9000;
    else if(g=='f'&&yos<10&&qual==1)
        salary=10000;
    else if(g=='f'&&yos<10&&qual==0)
        salary=6000;
    printf("salary of employee is %d",salary);
    return 0;
}
