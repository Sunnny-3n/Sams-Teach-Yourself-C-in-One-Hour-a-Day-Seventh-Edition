#include <stdio.h>
#include <stdlib.h>

#define X 14
#define Y 15

int A[X];
int B[Y];

int C(int A[],int a,int B[],int b);

int main(void)
{
	int l = 0;
	for (int l = 0; l < X; l++)
		A[l] = rand();
	for (int i = 0; i < Y; i++)
		B[i] = rand();
	for (int i = 0 ; i < Y; i++)
	{
		if (i < X)
		{
			l++;
			printf("A[%d] + B[%d] = %d\n",l-1,i,C(A,X,B,Y));
		}
		else
			printf("B[%d] = %d\n",i,C(A,X,B,Y));
	}
     
     return 0;

}


int C(int A[],int a,int B[],int b)
{
	for (int i = 0 ,l = 0; i < Y; i++)
	{
		if (i < X)
		{
			l++;
			return (A[l-1]+B[i]);
		}
		else
	         return (B[i]);
	}
	return 0;
}