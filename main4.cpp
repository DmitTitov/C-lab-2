#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task4.h"
#define BUFF	75

int main()
{
	srand(time(NULL));

	int secret, value, result = 1;
	char  line[BUFF] = {0};

	for (int i = 0; i < BUFF; i++)
	{
		int a = rand() % 3;
		if (a == 0)
			line[i] = char(rand() % 10 + 48); // цифры
		if (a == 1)
			line[i] = char(rand() % 26 + 65); // буквы лат строчн
		if (a == 2)
			line[i] = char(rand() % 26 + 97); // буквы лат заглав
	}
	line[BUFF-1] = '\0';					// конец строки
		
	printf("%s", line);
	printf("\n");
	process(line);

	printf("%s", line);

	return 0;
}



/*
   Написать программу, переставляющую символы в массиве согласно правилу:
   сначала идут латинские буквы, потом цифры. Строка задается в коде програм-
   мы в виде случайной последовательности букв и цифр. Пользоваться дополни-
   тельными массивами нельзя.
*/