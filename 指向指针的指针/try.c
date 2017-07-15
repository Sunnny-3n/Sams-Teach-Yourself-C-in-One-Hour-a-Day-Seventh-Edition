#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define size 100

int in(char *message[]);
void sort(char *message[],int n);
void printfs(char *message[],int n);

int main(void)
{
	char *message[size];
	int p;

	p = in(message);
	printf("\n输入了%d个字符串\n",p );
	sort(message,p);
	printf("\n");
	printfs(message,p);
	return 0;
}

int in(char *message[])
{
	int i = 0;
	char tmp[80];
	for (i = 0;(scanf("%s",tmp) == 1)&&(i < size)&&(tmp[0] != '/'); i++)
	{
		message[i] = (char *) malloc(350);
		strcpy(message[i],tmp);
	}
	return i;
}

void sort(char *message[],int n)
{
	int a,b;
	char *tmp;
	for ( a = 1; a < n; a++)
	{
		for (b = 0; b < n-1; b++)
		{
			if (strcmp(message[b],message[b+1]) > 0)
			{
				tmp = message[b];
				message[b] =message[b+1];
				message[b+1] = tmp;
			}
		}
	}
	return;
}

void printfs(char *message[],int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%s\n",message[i]);
	}
	return ;
}