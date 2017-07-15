#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	int try[20];
	int *next;
}  text;

int main(void)
{
	text *new;
	text *head;
	head = NULL;

	new = (text*)malloc(sizeof(text));
	new->next = head;
	head = new;
	return 0;
}
