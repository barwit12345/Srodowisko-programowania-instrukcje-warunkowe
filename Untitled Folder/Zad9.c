#include <stdio.h>

int a1,a2,b1,b2;
int main ()
{
	printf ("Podaj liczby a1, a2, b1 i b2 oddzielone przecinkami ");
	scanf ("%d,%d,%d,%d",&a1,&a2,&b1,&b2);
	if (a2>=b1&&a1<=b1)
	{
		while (b1<=b2&&b1<=a2)
		{
			printf ("%d ",b1);
			++b1;
		}
	}
	else if (a1>b1&&a1<b2)
	{
		while (a1<=b2&&a1<=a2)
		{
			printf ("%d ",a1);
			++a1;
		}
	}
	return (0);
}
	
