#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int x = 20, y = 20, i = 0, j = 0;
int flag = 0, score = 0;
int generate = -1, x1 = -1, y1 = -1;
char move;

void xy()
{

	if (flag == 0)
	{
		for (i = 0; i < y; i++)
		{
			for (j = 0; j <= 50; j++)
			{
				printf(" ");
				picture();
			}
			printf("\n");
		}
		for (j = 0; j < x; j++)
		{
			printf(" ");
		}
		printf(" *\n");
		for (j = 0; j < x; j++)
		{
			printf(" ");
		}
		printf("***\n");
	}
	else
	{
		for (i = 0; i < y; i++)
		{
			printf(" ");
			for (j = 0; j <= 50; j++)
			{
				if (x == x1 && i < y1)
				{
					break;
				}
				target();
			}
			printf("\n");
		}
		for (j = 0; j < x; j++)
		{
			printf(" ");
		}
		printf(" *\n");
		for (j = 0; j < x; j++)
		{
			printf(" ");
		}
		printf("***\n");
		flag = 0;
	}
}