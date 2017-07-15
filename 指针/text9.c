#include <stdio.h>
#include <stdlib.h>

#define X 10

int A[X],B[X];
long long C[X];

//void M(void);
void printfs(int j[],int e,int k[],int d);
void sumarrays(int j[],int e,int k[],int d);

int main(void)
{

      printfs(A,X,B,X);
      printf("=============================\n");
      sumarrays(A,X,B,X);
      return 0;
}

/*void M(void)
{
	for (int i = 0; i < X; i++)
	{
		A[i] = rand();
		B[i] = rand();
	}
     return;
}*/

void printfs(int j[],int e,int k[],int d)
{
	for (int i = 0; i < X; i++)
	{    
		A[i] = rand();
		B[i] = rand();
		printf("A[%d] = %d       B[%d] =%d\n",i,A[i],i,B[i]);
	}
	return;
}

void sumarrays(int j[],int e,int k[],int d)
{
	for (int i = 0; i < X; i++)
	{
		C[i] = A[i] + B[i];
		printf("C[%d] = %lld\n",i,C[i]);
	}
	return;
}