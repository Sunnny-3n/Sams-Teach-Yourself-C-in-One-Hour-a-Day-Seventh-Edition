#include <stdio.h>
#include <string.h>

int main(void)
{
	char firstname[233],
		 behindname[233],
		 lastname[233],
		 outname[233] = {0,'.'};
	scanf("%s%s%s",firstname,behindname,lastname);
	strncpy(outname,firstname,1);
	strncat(outname,behindname,1);
	outname[3] = '.';
	strcat(outname,lastname);
	printf("%s\n",outname);
	return 0;
}