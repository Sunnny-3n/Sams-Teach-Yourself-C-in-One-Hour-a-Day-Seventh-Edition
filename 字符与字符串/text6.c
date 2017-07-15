#include <stdio.h>

char *var,*var1;
char x,y;

//char A(char *n,char *m);

int main(void)
{
	
	puts("Ender 1");
	gets(&var);
	puts("Ender 2");
	gets(&var1);

	/*x = strlen(var);
     y = strlen(var1);
     if (x > y)
     	printf("%d\n",var);
     else*/
     	printf("%d\n",var1);

	return 0;
}

/*char A(char *n,char *m)
{
     int x,y;
     x = strlen(n);
     y = strlen(m);
     if (x > y)
     	return n;
     else
     	return m;
}*/