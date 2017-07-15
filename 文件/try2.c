#include <stdio.h>

int main(void)
{
	char buf[233];
	FILE *fp;
	char filename[566];
	//gets(filename);
	fp = fopen("age.c","r");
	printf("%d",fp);
	/*while(!feof(fp))
	{
		fgets(buf,2323333,fp);
		printf("%s\n",buf);
	}*/
	fclose(fp);
	return 0;
}