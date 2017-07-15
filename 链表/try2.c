#include <stdio.h>
#include <stdlib.h>
int MAX = 50;

struct list
{
	int name ;
	int data ;
	struct list *Ptr;
};

typedef struct list name;
typedef struct data data;
typedef struct list list;
typedef list *Ptr;

int get(int MAX,int i);
Ptr list_put(int MAX,Ptr first);
Ptr add_to_list(int MAX,Ptr first);
void show_list(Ptr first);

int main(void)
{
	Ptr first = NULL;
	first = list_put(MAX,first);
     add_to_list(MAX,first);
	show_list(first);
	return 0;
}

int get(int MAX,int i)
{
	int tmp;
	printf("Ender %d of %d :",i+1,MAX);
	scanf("%s",&tmp);
	return tmp;
}

Ptr list_put(int MAX,Ptr first)
{
	for (int i = 0; i < MAX; i++)
	{
		int tmp;
		tmp = get(MAX,i);
		if (tmp < 'a' || tmp > 'z')
			break;
		else
		{
			Ptr new = (Ptr)malloc(sizeof(list));
			if (!new)
			{
				printf("Error memory!\n");
				exit (1);
			}
				new->name = i+1;
				new->data = tmp;

			if (first == NULL)
			{
				first = new;
				new->Ptr = NULL;
				fflush(stdin);
			}
			else
			{
				Ptr ptr_tmp = first;
				while(ptr_tmp->Ptr != NULL)
					ptr_tmp = ptr_tmp->Ptr;
				ptr_tmp->Ptr = new;
				new->Ptr = NULL;
			}
		}
	}
	printf("\nYou exit ender\n");
	return (first);
}

Ptr add_to_list(int MAX,Ptr first)
{
	for (int i = 0; i < MAX-1; i++)
	{
		Ptr ptr_tmp = first;
		Ptr ptr_tmp2 = first;
		for (int l = 0; l < MAX-1; l++)
		{
			if (ptr_tmp > ptr_tmp->Ptr)
			{
				if (ptr_tmp->name == 1)	
				{
					first = ptr_tmp->Ptr;
					//ptr_tmp->Ptr = ptr_tmp->Ptr->Ptr;
					ptr_tmp->Ptr = ptr_tmp;
				}
				else
				{ 
					ptr_tmp2->Ptr = ptr_tmp->Ptr;
					//ptr_tmp->Ptr = ptr_tmp->Ptr->Ptr;
					ptr_tmp->Ptr = ptr_tmp;
					ptr_tmp2 = ptr_tmp2->Ptr;
				}
			}
			ptr_tmp = ptr_tmp->Ptr;
		}
	}
	return (first);
}

void show_list(Ptr first)
{
	Ptr ptr_tmp = first;
	int i = 1;
	printf("============================================================\n");
	while(ptr_tmp->Ptr != NULL)
	{
		printf("%p      %d    |  %d  %c \n",ptr_tmp,i,ptr_tmp->name,ptr_tmp->data);
		ptr_tmp = ptr_tmp->Ptr;
		++i;
	}
	Ptr ptr_tmp2 = ptr_tmp->Ptr;
	printf("%p      %d    |  %d  %c \n",ptr_tmp2,i+1,ptr_tmp2->name,ptr_tmp2->data);
}