#include <stdio.h>
int main()
{
  int i, j, n;
  scanf("%d", &n);
  //patern 1
  for (i = 0; i <= n; i++)
  {
    for (j = 0; j <= n; j++)
    {
      if (j <= i)
        printf(" ");
      else
        printf("*");
    }
    printf("\n");
  }
//patern 2
for (i = 0; i <= n; i++)
  {
    for (j = 0; j <= n; j++)
    {
      if (j <=(n-i))
        printf(" ");
      else
        printf("*");
    }
    printf("\n");
  }
//pattern 3
  for (i = 0; i <n; i++)
  {
    for (j = 0; j <= i; j++)
    {

        printf("*");
    }
    printf("\n");

  }

  //pattern 4
  for (i = 0; i <n; i++)
  {
    for (j = 1; j <= n-i; j++)
    {

        printf("*");
    }
    printf("\n");

  }
}
