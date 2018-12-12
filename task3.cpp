#include "task3.h"
#include <stdio.h>


char * layout(char buf[], int line, int count)
{
	for (int i = 0; i < count; i++)
	{
		for (int i = 0; i <= count - line; i++)
		{
			buf[i] = char(32);
		}
		for (int i = count-line; i <= count+line-1; i=i+2)
		{
			buf[i] = '*';
		}
		printf("%s\n", buf);
		line++;
	}

		return buf;
}