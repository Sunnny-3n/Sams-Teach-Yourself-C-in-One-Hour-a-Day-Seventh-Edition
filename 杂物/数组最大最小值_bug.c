#include<stdio.h>
#define b 1000

int A[1000];

void C(void);
int bigger(void);
int smaller(void);

int main(void)
{
	C();
	printf("bigger:%d  smaller:%d\n",bigger(),smaller() );
	return 0;
}


void C(void)
{
	int B;
	char C;
	puts("输入整数,如果输入整数输入后exit,将停止输入");
	for (int i = 0; i < b ; ++i)
	{
		scanf("%d %c /n",&B,&C);
		if (C == 1)
		{
			return;
		}
		else
		{
			A[i] = B;
		}
	}
}


int bigger(void)
{
	int bigger = 0;
	bigger = A[0];
	for (int i = 0; i < b ; ++i)
	{
		if (A[i] > bigger)
			bigger = A[i] ;
	}
	return bigger;

}

int smaller(void)
{
	int smaller = 0;
	smaller = A[0];
	for (int i = 0; i < b ; ++i)
	{
		if (A[i] < smaller)
			smaller = A[i] ;
	}
	return smaller;

}