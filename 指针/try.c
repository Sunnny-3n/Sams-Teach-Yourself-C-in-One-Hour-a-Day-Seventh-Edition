#include <stdio.h>

int *A;

int B = 2147264847;


int main(void)
{
	A = &B;
	printf("%d\n",B );
	printf("%d\n",*A );
	printf("%p\n",A );
	printf("%p\n",&B );
	return 0;
}