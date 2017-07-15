#include <stdio.h>

//char A(void);
double B(double x,double y,char sits);

double a,b;

int main(void)
{
	char p;
	printf("输入x,y: ");
	scanf("%lf %lf",&a,&b);
	printf("输入操作符 + - * /  ");
	scanf("%s",&p);
	switch(((p=='+')*1)+((p=='-')*2)+((p=='*')*3)+((p=='/')*4))
	{
		case 1: printf("x+y=%lf\n", B(a,b,p));
		break;
		case 2: printf("x-y=%lf\n", B(a,b,p));
		break;
		case 3: printf("x*y=%lf\n", B(a,b,p));
		break;
		case 4: printf("x/y=%lf\n", B(a,b,p));
		break;
	}
	return 0;
}

/*char A(void)
{
	char A;
	puts("输入操作符 + - * / ");
	scanf("%c",&A);
	return A;
}*/

double B(double x,double y,char A)
{
	switch((((A=='+')*1)+((A=='-')*2)+((A=='*')*3)+((A=='/')*4)))
	{
		case 1:return (x+y);
		break;
		case 2:return (x-y);
		break;
		case 3:return (x*y);
		break;
		case 4:return (x/y);
		break;
	}
}
