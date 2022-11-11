
#include<stdio.h>
int main()
{
    float red,green,blue;
    float cyan,magenta,white,black,yellow;
    scanf("%f %f %f",&red,&green,&blue);
    if(red==0&green==0&&blue==0)
    {
       cyan=magenta=yellow=0;
        black=1;
    }
        else
            red=red/255;
     green=green/255;
    blue=blue/255;
        if(red>blue)
        {
            if(red>green)
                white=red;
            else
                white=green;
        }
        else if(blue>green)
            white=blue;
        else white=green;

        cyan=(white-red)/white;
        magenta=(white-green)/white;
        yellow=(white-blue)/white;
        black=1-white;
        printf("%f %f %f %f%",cyan,magenta,white,yellow);
        return 0;
}
