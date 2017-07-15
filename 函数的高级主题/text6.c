#include <stdio.h>
#include <string.h>
#include <assert.h>

char *StrStr(char *str,char str2)
{
	assert(str);
	while(*str != '\0')
	{
		if (*str == str2)
			return str;
		str++;
	}
	return NULL;
}

int main(void)
{
	char a[233],b;
	scanf("%s%c",a,b); 
    printf("%ld\n", StrStr(a, b) - a);  
    //printf("%s\n", strchr(a, 'e'));  
    return 0;  
}
