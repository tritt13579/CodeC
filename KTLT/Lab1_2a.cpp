#include <stdio.h>
#include <stdlib.h>

void TinhToan(int a, int b, char c)
{
	float cal;
	switch (c)
	{
	case '+':
		cal = a + b;
		break;
	case '-':
		cal = a - b;
		break;
	case '*':
		cal = a * b;
		break;
	case '/':
		if (b != 0)
			cal = (float)a / b;
	}
	printf("%d %c %d = %.2f", a, c, b, cal);
}
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int a = atoi(argv[1]);
		char c = *argv[2];
		int b = atoi(argv[3]);
		TinhToan(a, b, c);
	}
	else
		printf("Err!");
}
