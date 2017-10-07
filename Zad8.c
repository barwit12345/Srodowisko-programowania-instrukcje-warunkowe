#include <stdio.h>
int main ()
{
float x,y,z,v;
printf ("Podaj długości krawędzi oddzielone przecinkami ");
scanf ("%f,%f,%f", &x,&y,&z);
v=x*y*z;
printf ("Objętość prostopadłościanu to %f\n", v);
return (0);
}
