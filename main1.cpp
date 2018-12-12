#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "windows.h"
#include "task1.h"

int main()
{
	int startHeight, t=0;
	float curHeight=1;
	printf("Enter the starting height\n");

	scanf("%d", &startHeight);

	while (curHeight > 0)
	{
		curHeight = height(t, startHeight);
		if (curHeight > 0)
		{
			printf("t=%2d c h=%.2f m\n", t, curHeight);
			
		}
		Sleep(1000);
		t++;
	}

	
	if (curHeight < 0)
		printf("BABAH!!!");

	return 0;
}