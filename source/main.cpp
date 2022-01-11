#include <stdio.h>
#include <stdlib.h>
#include "Header.h"


int main()
{
	
	while (score != 1000)
	{
		system("cls");
		printf(" Score:%d\n", score);

		Generate();
		xy();
		Move();
	}
	system("cls");
	printf("\n\n%20s", "You Win!!\n\n\n");
	system("pause");
	return 0;
}
