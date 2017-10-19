#include <stdio.h>

int a=1,n;
int main ()
{
	printf ("Podaj liczbe ");
	scanf ("%d",&n);
	printf ("\nDzielniki to: ");
	while (a<=n)
	{
		if (n%a==0)
		{
			printf ("%d ",a);
		}
		a++;
	}
	printf ("\n");
	return (0);
}
