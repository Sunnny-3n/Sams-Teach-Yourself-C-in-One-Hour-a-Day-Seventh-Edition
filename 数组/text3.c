#include <stdio.h>

#define X 88
#define Y 88

int A[X];

int main(void)
{
	for (int i = 0; i < X; i++)
	{
		A[i] = Y ;
	}

	for (int i = 0; i < X; i++)
	{
		printf("%d\n",A[i] );
	}
	return 0;
}