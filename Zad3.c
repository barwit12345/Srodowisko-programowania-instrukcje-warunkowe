#include <stdio.h>
int main()
{
int a,b;
a=2;
b=5;
printf ("Wartość A to %d, a wartość B to %d\n",a,b);

int c,d,e,g;
float f;
c=a+b;
d=a-b;
e=a*b;
f=(1.0*a/b);
g=a%b;

printf ("A+B to %d\nA-B to %d\nA*B to %d\nA/B to %f\nReszta z dzielenia A przez B to %d\n",c,d,e,f,g);

return(0);
}

