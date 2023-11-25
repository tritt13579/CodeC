#include <stdio.h>

int Dem1(int n)
{
	int c = 0;
	while (n != 0)
	{
		c++;
		n /= 10;
	}
	return c;
}

int Dem2(int n)
{
	if (n < 10)
		return 1;
	return 1 + Dem2(n / 10);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", Dem1(n));
}
