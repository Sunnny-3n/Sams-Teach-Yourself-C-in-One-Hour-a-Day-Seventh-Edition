#include <stdio.h>

int A[10];

int X;

int Y(void);

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		printf("Ender 10 numbers %d of 10: ", i+1 );
		scanf("%d",&X);
		A[i] = X;
	}
	printf("add is :%d\n",Y() );
}

int Y(void)
{
	int B = 0;
	for (int i = 0; i < 10; i++)
	{
		B = B + A[i];
	}
	return B;
}