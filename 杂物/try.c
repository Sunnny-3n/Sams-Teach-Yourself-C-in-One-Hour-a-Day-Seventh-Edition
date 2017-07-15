#include <stdio.h>


int main(void)
{
	unsigned long long bit = 1;
	bit = bit << 63;
	long long inport ;
	scanf("%lld",&inport);
	unsigned long long tmp = inport;
	if (inport < 0)
		printf("-");
	printf("%llu\n",bit );
	for (int i = 63; i >= 0; i--)
	{
		if (tmp >= bit)
		{
			tmp -= bit;
			printf("1");
		}
		else
			printf("0");
		//printf("%d %llu\n",i,tmp );
		bit = bit >> 1 ;
	}
	printf("\n");
}