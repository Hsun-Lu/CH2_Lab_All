#include <stdio.h>
#include <stdlib.h>

int Han_Xin_1()
{
	char a = 'X';
	char b = '-';
	int i, j;

	printf("(1)\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i == 0) || (i == 9) || (j == 0) || (j == 9))
			{
				printf("%c", a);
			}
			else
			{
				printf("%c", b);
			}
		}
		printf("\n");
	}

}