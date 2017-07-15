#include <stdio.h>

#define size1 13
#define size2 11

int A[size1] [size2];

int main(void)
{
	for (int i = 0; i < size1; i++)
	{
		for (int l = 0; l < size2; l++)
		{
			A[i] [l] = 0;
		}
	}
	for (int i = 0; i < size1; i++)
	{
		for (int l = 0; l < size2; l++)
		{
			printf("A[%d] [%d] = %d\n",i,l,A[i] [l] );
		}
	}
	return 0;
}