#include <stdio.h>

int a=0,n=1;
int main ()
{
	while (a<=n)
	{
		a++;
		if (a==n || n==1)
		{
			printf ("%d ",n);
		}
		if (n%a>0)
		{
			continue;
		}
		++n;
		a=1;
	}
	return (0);
}
