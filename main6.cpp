#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"
#define BUFF	50


int main()
{ 
	// �������� ������
	srand(time(NULL));

	int secret, value, result = 1;
	char  line[BUFF] = { 0 };

	for (int i = 0; i < BUFF; i++)
	{
		int a = rand() % 3;
		if (a == 0)
			line[i] = char(32);               // ������
		if (a == 1)
			line[i] = char(rand() % 26 + 65); // ����� ��� ������
		if (a == 2)
			line[i] = char(rand() % 26 + 97); // ����� ��� ������
		/*if (a == 3)
			line[i] = char(rand() % 10 + 48); // �����*/
		if (i == BUFF-1)
			line[i]= '\0';					  // ����� ������
	}
	 
	printf("%s", line);
	printf("\n");
	clear(line);

	printf("%s", line);

	return 0;
}
