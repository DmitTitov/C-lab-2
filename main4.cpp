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
			line[i] = char(rand() % 10 + 48); // �����
		if (a == 1)
			line[i] = char(rand() % 26 + 65); // ����� ��� ������
		if (a == 2)
			line[i] = char(rand() % 26 + 97); // ����� ��� ������
	}
	line[BUFF-1] = '\0';					// ����� ������
		
	printf("%s", line);
	printf("\n");
	process(line);

	printf("%s", line);

	return 0;
}



/*
   �������� ���������, �������������� ������� � ������� �������� �������:
   ������� ���� ��������� �����, ����� �����. ������ �������� � ���� �������-
   �� � ���� ��������� ������������������ ���� � ����. ������������ �������-
   �������� ��������� ������.
*/