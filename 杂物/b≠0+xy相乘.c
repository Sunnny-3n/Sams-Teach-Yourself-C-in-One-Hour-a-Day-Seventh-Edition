#include<stdio.h>

float x,y;

float A(float a,float b);
float B(float c,float d);
float C(float x,float y);

int main(void)
{
	puts("Ender x,y:");
	scanf("%f %f",&x,&y);
	A(x,y);
	printf("out:%f\n",A(x,y));
	return 0;
}

float A(float a,float b)
{
	float X;
	if (b!=1)
		x=B(a,b);
	else
		x=C(a,b);
	return x;
}

float B(float c,float d)
{
	if (d!=1)
	return (c/d);
}
	


float C(float x,float y)
{
	return (x*y);
}
