#include <stdio.h>

int main(void)
{
	char A;
	scanf("%c",&A);
	switch(A)
	{
		case 'Y':printf("a\n");
		break;
		case 'N':printf("b\n");
	}
	return 0;
}