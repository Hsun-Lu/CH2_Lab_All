#include <stdio.h>
#include <stdlib.h>

int Han_Xin_5()
{
	char a = 'X';
	char b = '-';
	int i, j, c;

	printf("\n(5)\n");
	c = 9;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == j)
			{
				printf("%c", a);
			}
			else if (j == c)
			{
				printf("%c", a);
				c--;
			}
			else
			{
				printf("%c", b);
			}
		}
		printf("\n");
	}

}