#include <stdio.h>

int A[10];

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		A[i] = 1 ;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",A[i] );
	}
	return 0;
}