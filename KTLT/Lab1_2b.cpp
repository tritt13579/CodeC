#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc >= 2 && argc <= 11)
	{ // day tu 1-10 phan tu
		float sum = 0;
		for (int i = 1; i < argc; i++)
			sum = sum + atof(argv[i]);
		printf("Avg: %.3f", sum / (argc - 1));
	}
	else
		printf("Err!");
}
