#include <stdio.h>
#include <string.h>

int main(void)
{
	char filename[233];
	char tmp[233];
	FILE *fp;
	unsigned long length = 0;
	scanf("%s",filename);
	fp = fopen(filename,"r");
	rewind(fp);
	while(!feof(fp))
	{
		fgets(tmp,233,fp);
		length = strlen(tmp) + length;
	}
	printf("\n%lu\n",length);
	return 0;
}