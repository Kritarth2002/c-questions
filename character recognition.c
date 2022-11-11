#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c>=65&&c<=90)
        printf("character is upper case");
    else if(c>=97&&c<=122)
        printf("the char is lower case");
    else if(c>=48&&c<=57)
        printf("the char is numeric");
    else if(c>=0&&c<=47||c>=58&&c<=64||c>=91&&c<=96||c>=123&&c<=127)
        printf("the char is special symbol");
    return 0;
}
