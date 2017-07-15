#include <stdio.h>

int main(void)
{
	FILE *fp;
	FILE *nfp;
	char filename[233];
	char newfilename[233];
	char tmp[2333];
	scanf("%s",filename);
	scanf("%s",newfilename);
	fp = fopen(filename,"r");
	nfp = fopen(newfilename,"w");
	while(!feof(fp))
	{
		fgets(tmp,233,fp);
		for (int i = 0; i < 233; i++)
		{	
			if (tmp[i] >= 'a' && tmp[i] <= 'z')
			{
				tmp[i] = tmp[i] - 32;
			}
		}
		fprintf(nfp, "%s",tmp);
	}

}