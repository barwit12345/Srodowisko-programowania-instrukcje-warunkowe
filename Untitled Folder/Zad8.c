#include <stdio.h>

float a,b;
int main ()
{
	printf ("Podaj wartości a i b oddzielone przecinkiem:");
	scanf ("%f,%f",&a,&b);
	printf ("Funkcja przechodzi przez ćwiartki");
	if (a>0)
	{
		printf (" 1");
		if (b>0)
		{
			printf (", 2");
		}
		printf (", 3");
		if (b<0)
		{
			printf (", 4");
		}
	}
	if (a<0)
	{
		if (b>0)
		{
			printf (" 1,");
		}
		printf (" 2");
		if (b<0)
		{
			printf (", 3");
		}
		printf (", 4");
	}
	if (a==0||b==0)
	{
		printf (" żadne");
	}
	printf ("\n");
	return (0);
}
