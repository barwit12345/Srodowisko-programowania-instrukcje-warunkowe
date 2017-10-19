#include <stdio.h>
int a;
int main ()
{
	while (a<10001)
	{
		if (a%2==0)
		{
			printf ("%d ",a);
		}
		a++;
	}
	return (0);
}
