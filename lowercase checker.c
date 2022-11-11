#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
   /* if(c>=90&&c<=122)
        printf("character is lower case");
    else printf("character is not lower case");*/
    if(c>=0&&c<=47||c>=58&&c<=64||c>=91&&c<=96||c>=123&&c<=127)
        printf("speacial symbol");
    else ("not special symbol");
    return 0;
}
