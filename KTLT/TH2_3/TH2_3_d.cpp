#include <iostream>
using namespace std;

int Tho(int n)
{
	if (n <= 0)
		return 0;
	else if (n == 1 || n == 2)
		return 2;
	else
		return Tho(n - 1) + Tho(n - 2);
}

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("So tho: &d", Tho(n));
	return 0;
}
