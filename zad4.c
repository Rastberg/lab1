#include <stdio.h>

int main(void)
{
 int n;
 int k = 0;
 printf("Podaj liczbę całkowitą: ");
 scanf("%d",&n);
 for(int i = 0 ; i <n; i++)
  {
   for(int j = 0; j <(n-i);j++)
    {
     printf(" ");
    }
    for(int k = 0; k<(2*i +1);k++)
   { printf("*");}
   printf("\n");
  }
}
