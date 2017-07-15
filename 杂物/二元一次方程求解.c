#include<stdio.h>
int a, b, c, d, A, B, x, y;
int main(void)
{
	printf("二元一次方程求解\n");
	printf("try\n");
	printf("1x+1y=A\n");
	printf("2x+2y=B\n");
	printf("输入 1x\n");
	printf("1x=");
	scanf("%d", &a);
	printf("输入 1y\n");
	printf("1y=");
	scanf("%d", &b);
	printf("输入 2x\n");
	printf("2x=");
	scanf("%d", &c);
	printf("输入 2y\n");
	printf("2y=");
	scanf("%d", &d);
	printf("输入 A\n");
	printf("A=");
	scanf("%d", &A);
	printf("输入 B\n");
	printf("B=");
	scanf("%d", &B);
	printf("\nx = %d\n",x);
	printf("\ny = %d\n",y);
	if (a*x+b*y != A)
	{
	 printf("error!\n");
	}
	else
	{
		printf("\nx = %d\n",x);
	    printf("\ny = %d\n",y);
	}
	return 0;
}