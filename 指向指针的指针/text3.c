#include <stdio.h>

#define long 12

char lib[12] [12] ;

char * ptr =&lib [0] [0];


int main(void)
{
	for (int i = 0; i < long; ++i)
	{
		for (int l = 0; l < long; l++)
		{
			lib [i] [l] = 'X';
		}
	}
	for (int o = 0; o < long; ptr++)
	{
		printf("%s\n",ptr++);
	}
	return 0;
}
