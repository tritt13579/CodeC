#include <stdio.h>

int lt1(int x, int n)
{
	int s = 1;
	for(int i = 0; i < n; i++)
		s*=x;
	return s;
}

int lt2(int x, int n)
{
	if(n==0)	return 1;
	int res = lt2(x, n/2);
	if(n % 2)
		return res * res * x;
	else
		return res * res;
}


int main() {
	int x, n;
	scanf("%d%d", &x, &n);
	printf("%d", lt1(x, n));
	
	return 0;
}
