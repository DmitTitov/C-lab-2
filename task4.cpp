#include "task4.h"
#include <stdio.h>
#define BUFF	75


char* process(char* line)
{
	int flag = 0;
	//��������� ����� �������� ������
	for (int i = 0; i <= (BUFF - 2); i++)
	{
		if ((line[i] >= char(48) && line[i] <= char(57)))  // ��������� ������� ������ ����� ��� ���
		{
			//���� ������� ������ �����, �� ��������� ��������� ������� ������ ����� ��� ���
			for (int j = BUFF - 2; j > 0; j--)
			{
				
				if ((line[j] >= char(48) && line[j] <= char(57)))
				{// ���� ������� ������ ����� �� ������ �� ������
				}
				//���� �� ����� �� ������ ������
				else
				{
					//j = BUFF - 2 - flag;
					char b = line[i];
					line[i] = line[j];
					line[j] = b;
				
					printf("%s", line);
					printf("\n");
					flag++; // ���������� ����� ����� ��� ������� ������
					j = -1; //���� ������� ������ �� ������� �� �����
				}
				if ( i == j)
				{
					j = 0;
					i = BUFF;
					flag = 0;
				}
			}

		}
	}
	return 0;
}