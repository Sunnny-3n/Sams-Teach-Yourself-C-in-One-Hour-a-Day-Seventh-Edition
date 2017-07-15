#include <stdio.h>

char A[],*ptr;

int main(void)
{
	while(*(ptr = gets(A))  !=  '\0')
		puts(A);
	puts("error");
	return 0;
}
