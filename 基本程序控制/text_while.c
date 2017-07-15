#include<stdio.h>
int i = 1;
int main(void)
{
	while(i < 100)
	{
		if (i == 1)
		{
			printf("%d\t",i );
			i = i +3 ;
			printf("%d\t",i );
		}
		else
		{
			i += 3;
		    printf("%d\t",i );
		}
	}
	printf("\n");
	return 0;
}