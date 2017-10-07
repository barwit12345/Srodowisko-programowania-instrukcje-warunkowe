#include <stdio.h>
int main ()
{
float a,b,x,y;
printf ("Podaj wartość A ");
scanf ("%f", &a);
printf ("Podaj wartość X ");
scanf ("%f", &x);
printf ("Podaj wartość B ");
scanf ("%f", &b);

y=a*x+b;

printf ("Y to %f\n",y);
return (0);
}
