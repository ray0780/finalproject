#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

void target()
{

	if (j == x || (j == x1 && i == y1))
	{
		printf("%s", (j == x1 && i == y1) ? "+" : "|");
	}
	else
	{
		printf(" ");
	}
	if (x == x1 && y == i + 1)
	{
		score = score + 100;
		x1 = -1, y1 = -1;
		x1 = 1 + (rand() % 25);
		y1 = 1 + (rand() % 10);
		generate = 26;
	}
}

void picture()
{
	if (j == x1 && i == y1)
	{
		printf("+");
	}
}

void Generate()
{
	if (generate % 25 == 0)
	{
		x1 = 1 + (rand() % 25);
		y1 = 1 + (rand() % 10);
	}
}