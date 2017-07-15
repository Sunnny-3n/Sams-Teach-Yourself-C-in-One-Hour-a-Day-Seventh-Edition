#include <stdio.h>

#define X 12
#define Y 12

//unsigned char a1 = 201,a2 = 205,a3 = 187,a4 = 186,a5 = 186, a6 = 200,a7 = 205,a8 = 188;

void A(void);

int main(void)
{
     A();
     return 0;
}

void A(void)
{
	printf("\n");
	printf("『");
	for (int i = 0; i < X-2; i++)
	     printf("=");
	printf("﹃\n");
	 for (int i = 0; i < Y-2; ++i)
	 {
	 	printf("‖");
	 	for (int l = 0; l < X-2; l++)
	 	{
	 		printf(" ");
	 	}
	 	printf("‖\n");
	 }
	printf("﹄");
	for (int i = 0; i < X-2; i++)
	     printf("=");
	printf("』\n");
}