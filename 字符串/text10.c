#include <stdio.h>


float get_float(char inport[])
{
	//printf("%s\n",inport);
	int i = 0;
	int count = 0;
	float outport = 0;
	//if(inport[0] == '.')
	//	return 0;

	for (int tmp = 0; inport[tmp] !='.' && inport[tmp] != '\0' ; ++tmp)
	{
		//printf("%d\n",tmp + 1);
		i = tmp + 1;
		printf("%d\n",i );
	}

	/*while(1)
	{
		if (inport[count] != isdigit(inport[count]) && inport[count] !='+' && inport[count] != '-' && inport[count] != '.' )
			printf("%d\n",i );
			//return outport;
		else
		{
			count++;
			if (i == 0)
			{	
				printf("%d\n",i );
				if(inport[count + 1] == '.')
					++count;
				else
				{
					float Thedecimalpoint = 0.1;
					outport = ((inport[count] - '0') * Thedecimalpoint) ;
					Thedecimalpoint /= 0.1;
				}
			}
			else
			{
				printf("%d\n",i );
				if (i == 1)
					outport = (inport[count] - '0') + outport;
				else
					outport = ((inport[count] - '0') * 10 * (i - 1)) + outport ;
				--i;
			}
		}
		count++;
	}*/
	return outport;
}



int main(void)
{
	char a[233];
	scanf("%s",a);
	printf("%f\n",get_float(a));
	return 0;
}