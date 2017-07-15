#include <stdio.h>
#include <stdlib.h>

#define X 5
#define Y 4

int A[X] [Y];

int main(void)
{
	for (int x = 0; x < X; x++)
	{
		for (int y = 0; y < Y; y++)
		{
			A[x] [y] = rand();
		}
	}

	for (int x = 0; x < X; x++)
	{
		for (int y = 0; y < Y; y++)
		{
			printf("A [%d] [%d] = %d\n",x,y,A[x] [y] );
		}
	}
}