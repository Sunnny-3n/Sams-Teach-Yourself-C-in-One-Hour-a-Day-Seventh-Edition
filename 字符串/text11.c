#include <stdio.h>
#include <string.h>

char get[233];
char Theinteger[20] ={'2','3','3'};
char Thedecimal[20] ={'2','3','3'};

float get_float(char Theinteger[],char Thedecimal[])
{
	float outport = 0;
	float Thedecimalpoint = 0.1;
	char TheintegerCount = 3;
	char ThedecimalCount = 3;

/*
	for (; isdigit(Theinteger[TheintegerCount]) == 1 ; ++TheintegerCount)
		;
	for (; isdigit(Thedecimal[ThedecimalCount]) == 1 ; ++ThedecimalCount)
		;
*/

printf("%d\n",TheintegerCount);
	for (int i = 0; i < TheintegerCount; i++)
	{
		if (i == TheintegerCount - 1)
			outport += (Theinteger[i] - '0');
		else
			outport += (Theinteger[i] - '0') * 10 * (TheintegerCount - i - 1);
	}

	for (int l = 0; l < ThedecimalCount; l++)
	{
		outport += (Thedecimal[l] - '0') * Thedecimalpoint;
		Thedecimalpoint /= 10;  
	}
	return outport;

}

char judge(char inport[])
{
	char count = 0;
	char Theinteger_count = 0;
	char Thedecimal_count = 0;


	for (int i = 0; inport[i] != '\0'; i++)
	{
		if (inport[i] != '+' && inport[i] != '-' && (~(isdigit(inport[i]))) && inport[i] != '.')
		{
			if (inport[0] == '.')
				return 2;
			return 2;
		}
		if (inport[i] != '.' || count)
		{
			Theinteger[Theinteger_count] = inport[i];
			++Theinteger_count;
		}
		else
		{
			if (inport[i] == '.')
				count = 1;
			else
			{
				Thedecimal[Thedecimal_count] = inport[i];
				++Thedecimal_count;
			}
		}
	}
	return 0;
}

int main(void)
{
	char tmp;
	char inport[233] = {'2','3','3'};
	//scanf("%s",inport);
	printf("%c\n",inport[0] );
	printf("%d", judge(inport));
	printf("%s\n",Theinteger);
	printf("%s\n",Thedecimal);
	printf("%f\n",get_float(Theinteger,Thedecimal));
	return 0;
}