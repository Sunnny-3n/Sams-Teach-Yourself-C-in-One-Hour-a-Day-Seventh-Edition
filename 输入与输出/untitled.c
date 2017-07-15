#include <stdio.h>

#define number 15
#define biggest 30

int main(void)
{
	for (int i = 1; i < number; i++)
	{
		if (i % 2)
			++i;
		else for (int l = 1; l < number; l++)
				 if (l % 2)
					++l;
				 else
				 	printf("%d-%d-%d=%d\n",biggest,i,l,biggest-i-l);
	}
	return 0;
}