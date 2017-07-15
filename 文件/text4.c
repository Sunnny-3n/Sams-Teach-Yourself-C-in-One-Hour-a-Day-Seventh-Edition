#include <stdio.h>

int main(void)
{
	char filename[233];
	char tmp[233];
	FILE *fp;
	scanf("%s",filename);
	fp = fopen(filename,"r");
	rewind(fp);
	printf("\n");
	while(!feof(fp))
	{
		fgets(tmp,233,fp);
		printf("%s",tmp);
	}
	printf("\n");
	return 0;
}