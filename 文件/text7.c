#include <stdio.h>

int main(void)
{
	FILE *fp;
	char filename[233];
	char tmp[129];
	scanf("%s",filename);
	fp = fopen(filename,"r");
	fread(tmp,1,128,fp);
	tmp[128] = '\0';
	printf("%s\n\n",tmp);
	for (int i = 0; i < 128; i++)
	{
		printf("%x",tmp[i] );
	}
	printf("\n");
}