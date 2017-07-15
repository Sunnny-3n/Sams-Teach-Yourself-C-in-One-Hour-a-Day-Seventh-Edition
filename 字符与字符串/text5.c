#include <stdio.h>

#define X 20000

char A[X]  ;
char B[X];


void C(char r[],int a,char g[],int b);

int main(void)
{
	puts("Ender");
	gets(A);
	C(A,X,B,X);
	return 0;

}

void C(char r[],int a,char g[],int b)
{
	for (int i = 0; i < X; i++)
	{
		B[i] = A[i];
		if (A[i] == 0)
			return;
		else
			printf("B[%d] = %c\n",i,B[i]);
	}
	return ;
}

