#include <stdio.h>
int x;
int main(void)
{
	printf("输入年龄:");
    scanf("%d",&x );
    if (x>=21)
    {
    	   printf("你是法定成年人\n");
    	   if (x<=65)
    	   {
    	   	printf("你不是老人\n");
    	   }
    	   else
    	   {
    	   		printf("你是老人\n");
    	   }

    }
    else
    {
    	   	printf("你不是法定成年人\n");
    }

}


