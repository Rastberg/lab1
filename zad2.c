#include <stdio.h>
#include <math.h>

int main(void)
{
 int a,b,c;
 double delta;
 printf("\nPodaj współczynnik a: ");
 scanf("%d",&a);
 printf("\nPodaj współczynnik b: ");
 scanf("%d",&b);
 printf("\nPodaj współczynnik c: ");
 scanf("%d",&c);
 delta = b*b - 4*a*c;
 if(delta>0)
 {
  double x1,x2;
  double sdelta = sqrt(delta);
  x1 = (-b + sdelta)/2*a;
  x2 = (-b - sdelta)/2*a;
  printf("x1 = %lf \n",x1);
  printf("x2 = %lf \n",x2);
 }
 else if(delta == 0)
 {
   double x = (-b)/(2*a);
   printf("x = %lf \n",x);
 }
 else
  printf("równanie nie ma pierwiastków\n");
 return 0;
}
