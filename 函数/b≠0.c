#include<stdio.h>

float a,b;

float c(float c,float d);

int main(void)
{
	puts("Ender x,y");
	scanf("%f %f",&a,&b);
	c(a,b);
	printf("out=%f\n",c(a,b));
	return 0;
}
	

  float c(float c,float d)
{
	if (d!=0)
	return (c/d);
}

