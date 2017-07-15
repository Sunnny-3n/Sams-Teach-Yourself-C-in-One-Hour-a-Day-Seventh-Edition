#include <string.h>
#include <stdio.h>
int strcase(char *str1 , char *str2);

int main(void)
{
	char a[2333];
	char b[2333];
	scanf("%s%s",a,b);
	printf("%d",strcase(a,b));
	return 0;
}
int strcase(char *str1 , char *str2)
{
	char a[2333];
	char b[2333];
	strcpy(a,str1);
	strcpy(b,str2);
	for (int i = 0; i < 2333; ++i)
	{
		tolower(a[i]);
		tolower(b[i]);
	}
	return strstr(a,b) - a;
}