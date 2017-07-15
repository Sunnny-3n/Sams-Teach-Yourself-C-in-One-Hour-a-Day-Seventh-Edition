#include<stdio.h>

long long a, b;

long long c(long long x,long long y);

int main(void)
{
	puts("输入x,y得到他们的乘积:");
	scanf("%lld %lld",&a,&b);
	c(a,b);
	printf("\nx*y=%lld\n",c(a,b));
	return 0;
}

long long c(long long x,long long y)
{
	return (x*y);
}
 