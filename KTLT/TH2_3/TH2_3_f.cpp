#include <stdio.h>

int nhap(int a[], int &n)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

int Max1(int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
		if (max < a[i])
			max = a[i];
	return max;
}

int Max2(int a[], int n)
{
	if (n == 0)
		return 0;
	if (a[n - 1] > Max2(a, n - 1))
		return a[n - 1];
	else
		return Max2(a, n - 1);
}

int Min(int a[], int n, int min, int &bot)
{
	// if (n == 0)
	// 	return 0;
	// if (a[n - 1] > 0 && a[n - 1] < Min(a, n - 1))
	// 	return a[n - 1];
	// else
	// 	return Min(a, n - 1);
	// if (n == 0)
	// 	return -1;
	if (n == 0)
		return bot;
	if (a[n - 1] < min)
	{
		min = a[n - 1];
		bot = n;
	}
}

int main()
{
	int a[100], n;
	int bot = 1;
	int min = 0;
	nhap(a, n);
	printf("%d", Min(a, n, min, bot));
}
