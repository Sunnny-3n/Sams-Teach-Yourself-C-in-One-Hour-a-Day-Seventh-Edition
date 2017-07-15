#include<stdio.h>
int x,y;
int main(void)
{
    printf("输入x:");
    scanf("%d",&x );
    if((x>=1)&&(x<=20))
    	 y = x;
    	  printf("y=%d\n",y );
    	  return 0;
}