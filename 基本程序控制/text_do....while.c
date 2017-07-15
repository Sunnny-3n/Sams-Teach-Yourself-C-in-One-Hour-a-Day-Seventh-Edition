#include<stdio.h>
int i = 1;
int main(void)
{
	do
	{
		i +=3 ;
		printf("%d\t",i );
	} while (i < 100);
	return 0;
}