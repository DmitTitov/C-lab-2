#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task3.h"

int main()
{
	int line=1, count;
	char buf[512] = { 0 };

	printf("Enter the number of lines\n");
	scanf("%d", &count);

	layout(buf, line, count);
	
	return 0;
}