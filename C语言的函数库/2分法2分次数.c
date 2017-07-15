#include <stdio.h>
#define MAX 2000000

int main(void)
{
	int i = MAX ,count = 0;
	for (; i >= 2; i /= 2)
		count++;
	printf("%d\n",count);
	return 0;
}