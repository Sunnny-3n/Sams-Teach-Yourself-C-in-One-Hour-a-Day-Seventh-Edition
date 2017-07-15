#include <stdio.h>

void copy(FILE *fp,FILE *fp2)
{
	while(!feof(fp))
		{
			int c = fgetc(fp);
			fputc(c,fp2);
		}
}

int main(int argc,char *argv[])
{
	FILE *fp;
	FILE *fp2;
	fp = fopen(argv[1],"br");
	fp2 = fopen(argv[2],"ba");

	if (fp == NULL)
	{
		printf("Error opening file");
		return 0;
	}

	if (fp2 == NULL)
	{
		printf("Error opening file");
		return 0;
	}

	if (ftell(fp2) != 0)
	{
		char a[5];
		printf("文件以存在,是否继续（可能会擦写当前数据）: yes or no\n");
		fgets(a,3,stdin);
		if(a == "yes")
			copy(fp,fp2);
		if(a == "no")
			return 0;
	}
	else
	{
		copy(fp,fp2);
	}
	printf("操作成功完成\n");
	fclose(fp);
	fclose(fp2);
	return 0;
}