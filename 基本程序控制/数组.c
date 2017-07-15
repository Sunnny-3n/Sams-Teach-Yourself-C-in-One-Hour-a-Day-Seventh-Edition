#include<stdio.h>

int A[5];

int a = 0,b = 0;

int main(void)
{
	while(a <5)
		{
              a++;
		     printf("Ender number %d of 5\n",a);
			scanf("%d",&b);
			A[a] = b;
		}
	a = 0 ,b = 0;
	while(a < 5)
	{
		++a;
         b++;
		printf("Value %d is %d\n",a,A[b] );
	}
	
}