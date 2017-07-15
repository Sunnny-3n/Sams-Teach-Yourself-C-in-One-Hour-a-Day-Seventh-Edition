#include <stdio.h>

int A[10];
int B[10];

int main(void)
{
	for (int i = 0; i < 10 ; i++)
		A[i] = i;
     for (int i = 0; i < 10; i++)
         printf("A[%d] = %d\n",i,A[i] );
     for (int i = 0; i < 10; i++)
     	B[i] = A[i] + 10;
     for (int i = 0; i < 10; i++)
     	printf("B[%d] = %d\n",i,B[i] );
     return 0;
}