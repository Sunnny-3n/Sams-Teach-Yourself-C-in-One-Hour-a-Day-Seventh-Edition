#include<stdio.h>
int x, y;
int main(void)
{
     printf("in x\n");
	printf("out y\n");
	printf("y=(x+2)(x*3)(x+9)\n");
	printf("y=");
    scanf("%d", &x);
    y = (int) (x-2)*(x*3)*(x+9);
    printf("\n\ny = %d\n",y);
    return 0;
}
