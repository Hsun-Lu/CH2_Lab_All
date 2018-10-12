#include <stdio.h>
#include <stdlib.h>

int Han_Xin_4()
{
	char a = 'X';
	char b = '-';
	int i, j, c, d;

	printf("\n(4)\n");
	c = 1;
	d = 8;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i > 0) && (i < 5) && (j == c))
			{
				printf("%c", a);
			}
			else if ((i > 0) && (i < 5) && (j == d))
			{
				c++;
				printf("%c", a);
				d--;
			}
			else if (i == 0)
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