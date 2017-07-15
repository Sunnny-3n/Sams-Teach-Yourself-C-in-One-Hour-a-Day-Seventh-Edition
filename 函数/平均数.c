#include<stdio.h>

float b1,b2,b3,b4,b5;

float A(float a1,float a2,float a3,float a4,float a5);

int main(void)
{
	puts("Ender 1 2 3 4 5");
	scanf("%f %f %f %f %f",&b1,&b2,&b3,&b4,&b5);
	A(b1,b2,b3,b4,b5);
	printf("\n平均数为:%f\n",A(b1,b2,b3,b4,b5));
	return 0;
}

float A(float a1,float a2,float a3,float a4,float a5)
{
	return ((a1+a2+a3+a4+a5)/5);
}



