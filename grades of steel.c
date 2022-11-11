#include<stdio.h>
int main()
{
  float h,c,t;
  int grade;
  scanf("%f %f %f",&h,&c,&t);
  if(h>50&&c<0.7&&t>5600)
        {grade=10;
  printf("grade : %d",grade);
        }
   else if (h>50&&c<0.7)
   {
       grade=9;
       printf("grade : %d",grade);
   }
    else if (c<0.7&&t>5600)
   {
       grade=8;
       printf("grade : %d",grade);
   }
   else if (h>50&&t>5600)
   {
       grade=7;
       printf("grade : %d",grade);
   }
   else if (h>50||c<0.7||t>5600)
   {
       grade=6;
       printf("grade : %d",grade);
   }
   else if(!(h>50)&&!(c<0.7)&&!(t>5600))
          {
              grade=5;
           printf("grade : %d",grade);
          }

           return 0;

}

