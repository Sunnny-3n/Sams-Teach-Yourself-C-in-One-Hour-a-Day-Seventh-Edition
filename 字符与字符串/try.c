#include <stdio.h>
#include <stdlib.h>

unsigned char *ptr,*p;

int main(void)
{
	ptr = malloc(35*sizeof(unsigned char));
	if (ptr == NULL)
	{
		puts("Memory allocation error.");
		exit(1);
	}

     p = ptr;

	for (int i = 188; i <240; i++)
		*p++ = i;

	*p ='\0';

	puts(ptr);
	free(ptr);
	return 0;
}
