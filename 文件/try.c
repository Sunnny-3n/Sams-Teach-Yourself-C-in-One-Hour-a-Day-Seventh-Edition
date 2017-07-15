#include <stdio.h>

int main(void)
{
	FILE *fp;
	fp = fopen("try.txt","w");
	for(char le = '0'; le < ';' ; le++)
		for(char lf = '0';lf < ';';lf++)
			for(char lj = '0';lj < ';';lj++)
				for(char lk = '0';lk < ';';lk++)
					for(char li = '0';li < ';';li++)
						for(char ll = '0';ll < ';';ll++)
							for(char lo = '0';lo < ';';lo++)
								for(char lp = '0';lp < ';';lp++)
									for(char lq = '0';lq < ';';lq++)
	         fprintf(fp,"%c%c%c%c%c%c%c%c%c\n",le,lf,lj,lk,li,ll,lo,lp,lq);
	return 0;
}