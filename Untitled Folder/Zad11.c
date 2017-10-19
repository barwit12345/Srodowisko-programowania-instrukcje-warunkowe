#include <stdio.h>

int a,b,div;
int main ()
{
	printf ("Podaj a i b oddzielone przecinkiem ");
	scanf ("%d,%d",&a,&b);
	if (a>=b)
	{
		for (div=b;div>0;div--)
		{
			if (a%div==0 && b%div==0)
			{
				printf ("NWD to %d\n",div);
				break;
			}
		}
	}
	else
	{
		for (div=a;div>0;div--)
		{
			if (a%div==0 && b%div==0)
			{
				printf ("NWD to %d\n",div);
				break;
			}
		}
	}
	return (0);
}
