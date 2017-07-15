#include <stdio.h>
int A = 0;

#define size 4;

struct bit
{
	unsigned bit : size;
}; 


int main(void)
{
	for (A = 0; A < 10; A++)
	{
		if (A == 5)
			break;
	}
	printf("%d\n",A);
	return 0;
}
