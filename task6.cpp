#include "task6.h"
#include <stdio.h>
#define GOAL char(32)
#define BUFF	50

char * clear(char * line)
{
	int count = 0;
	for (int i = 0; i <= BUFF - count; i++)
	{
		if (i == 0 && line[i] == GOAL) //проверка первых элементов строки
		{
			count++;
			for (int j = 0; j < BUFF - count; j++)
			{
				line[j] = line[j + 1];
				i = -1; //вернуться к началу строки
			}
		}
		//проверка промежуточных элементов строки
		if ((line[i] == GOAL && line[i + 1] == GOAL)/*|| (line[i] == GOAL && line[i + 1] == GOAL)*/)
		{
			count++;
			for (int j = i; j < BUFF - count; j++)
			{
				line[j] = line[j + 1];
				i = -1; //вернуться к началу строки
			}
		}
		//проверка последнего элемента массива
		if (line[i] == GOAL && line[i + 1] == '\0')
		{
			count++;
			line[i] = '\0';
			i = -1;  //вернуться к началу строки
		}


			
			

	}
	

	return 0;
}