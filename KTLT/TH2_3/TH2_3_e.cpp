#include <stdio.h>

int UCLN1(int a, int b)
{
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int UCLN2(int a, int b)
{
	if(b == 0)	return a;
	return UCLN2(b, a % b);
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", UCLN1(a, b));
}
