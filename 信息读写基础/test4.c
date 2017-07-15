#include<stdio.h>

int A;

int B[10];

void X(void);

int main(void)
{
	
	for (int i = 0; i < 233; i++)
	{
		printf("\n输入偶数%d of 10: ",i+1);
		scanf("%d",&A);
		if (A == 99)
		{
			X();
			return 0;
		}
		if (A % 2 == 1)
		{
			printf("%d不是偶数\n",A);
			i = i-1;
		}
		else
		{
             if (i == 5)
               {
             	     X();
             	     return 0;
               }
		    B[i] = A;
		}
	}
	printf("\n");
	return 0;
}

void X(void)
{
	for (int i = 0; i < 6; i++)
	{
		printf("%d is %d\n",i+1,B[i] );
	}
	return;
}