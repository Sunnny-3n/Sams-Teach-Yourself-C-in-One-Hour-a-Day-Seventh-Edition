#include<stdio.h>
int a(char a);
int b;
int main(void)
{
printf("输入名字首字母:");
scanf("%c",&b);
a(b);
printf("\n你的房间号为：%d\n",a(b));
return 0;
}

int a(char a)
{
	int b;
	if (((a >='a')&&(a <='m'))||((a >='A')&&(a <='M')))
		b =1054;
	else
		b = 1055;
	return b;
}