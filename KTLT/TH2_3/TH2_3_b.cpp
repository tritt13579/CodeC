#include <stdio.h>

int Tong1(int n)
{
	int s = 0;
	for(int i = 1; i <= n; i++)
		s += i * i;
	return s;
}

int Tong2(int n)
{
	if(n == 1)	return 1;
	return n * n + Tong2(n - 1);
}

int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Ket qua: %d", Tong1(n));
	return 0;
}
