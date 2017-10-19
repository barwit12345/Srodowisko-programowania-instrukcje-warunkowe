#include <stdio.h>
int a=1,b=1,n;
int main ()
{
	printf ("Wpisz górną granicę tabliczki ");
	scanf ("%d", &n);
	while (a<=n)
	{
		while (b<=n)
		{
			printf ("%d ", a*b);
			b++;
		}
		b=1;
		a++;
		printf ("\n");
	}
	return (0);
}
