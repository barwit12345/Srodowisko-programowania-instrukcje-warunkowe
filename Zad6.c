#include <stdio.h>
int main ()
{
float a,h,s;
printf ("Podaj długość podstawy ");
scanf ("%f",&a);
printf ("Podaj wysokość trójkąta ");
scanf ("%f",&h);
s=a*h/2;
printf ("Pole trójkąta to %f\n",s);
return (0);
}
