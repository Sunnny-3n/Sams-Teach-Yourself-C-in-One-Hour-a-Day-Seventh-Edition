#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *me[10];
	for (int i = 0; i < 10; i++)
	{
		me[i] = (char *) malloc(35);
		scanf("%s",me[i]);
	}
	return 0;
}