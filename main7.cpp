#include <stdio.h>
#include <stdlib.h>
#define SIZEBUF 256

int main()
{
	printf("Enter a string\n");
	char buf[SIZEBUF];
	int num[SIZEBUF] = { 0 };
	int count = 0;
	fgets(buf, 256, stdin);

	for (int i = 0; i < SIZEBUF; i++)
	{
		for (int j = 0; j < SIZEBUF; j++)
		{
			if (buf[i] == buf[j])
			{
				count++;
			}
			else
			{
				num[i] = 0;
			}
			if (buf[j] == '\n')
			{
				num[i] = count;
				count = 0;
			}
			if (buf[j] == char('\n')) //����� �� ������� ��� ���������� �������
			{
				j = SIZEBUF;
			}

		}
		if (buf[i] == char('\n')) //����� �� ������� ��� ���������� �������
		{
			i = SIZEBUF;
		}
	}

	for (int i = 0; i < SIZEBUF; i++)
	{
		if (buf[i] == char('\n')) //����� �� ������� ��� ���������� �������
			i = SIZEBUF;
		else
		printf("%c %d\n", buf[i], num[i]);
	}

	return 0;
}

