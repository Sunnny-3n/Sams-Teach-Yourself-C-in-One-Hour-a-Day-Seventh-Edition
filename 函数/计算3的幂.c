#include<stdio.h>

int in; 

unsigned long long N(unsigned long long a);

int main(void)
{
	puts("Ender x:");
	scanf("%d",&in);
	N(in);
	printf("\n3^%d=%llu\n",in,N(in));
	return 0;
}

unsigned long long N(unsigned long long a)
{
	unsigned long long b;
	if (a == 0)
	{
		return b;
	}
	else
	{
         b = (3*N(a-1));
         return b;
	}

        
	
}	
