#include <stdio.h>
#include <stdlib.h>

#define X 1000

int A[1000];

float B(void);
void C(void);

int main(void)
{
	for ( int i = 0; i < X; i++)
	{
		A[i] = rand();
	}
	printf("平均值为：%f\n",B());
	C();
	return 0;
}


float B(void)
{
	long long B = 0;
	for (int i = 0; i < X; i++)
	{
		B = B + A[i];
	}
	return (B /X);
}

void C(void)
{
	int B;
	for (int l = 1; l < 100+1; l++)
	{
		for (int i =1 ; i < 11; i++)
		{
			B++;
			printf("A[%d] = %d\n",B-1,A[B-1] );
		}
		puts("Ender to continue,CTRL-C to quit.");
		getchar();
	}
		
	
}