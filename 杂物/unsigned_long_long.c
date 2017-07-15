#include<stdio.h>
unsigned long long x,y;
int main(void)
{
   printf("in x,out y\n");
   printf("y=x^64\n");
   printf("y=");
   scanf("%d", &x);
   y = (unsigned long long) (x*2147483647);
   printf("y = %d\n",y );
   return 0;
}