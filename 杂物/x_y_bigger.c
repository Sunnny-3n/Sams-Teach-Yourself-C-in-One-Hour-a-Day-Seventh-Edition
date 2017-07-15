#include<stdio.h>
int x,y;
int main(void)
{
	printf("Ender two number:");
	scanf("%d %d",&x,&y);
	printf("%d is bigger\n", (x>y)?x:y );
	return 0;
}