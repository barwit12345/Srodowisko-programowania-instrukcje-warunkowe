#include <stdio.h>
int main ()
{
float a,b,c,d;
printf ("Podaj wartości A, B i C oddzielone przecinkami ");
scanf ("%f,%f,%f",&a,&b,&c);
d=3.0/(1.0/a+1.0/b+1.0/c);
printf ("Średnia harmoniczna A, B i C to %f", d);
return (0);
}
