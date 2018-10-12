#include <stdio.h>
#include <stdlib.h>

int Han_Xin_3()
{
	char a = 'X';
	char b = '-';
	int i, j, c, d;

	printf("\n(3)\n");
	c = 4;
	d = 5;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i < 5) && (j == c))
			{
				printf("%c", a);
				c--;
			}
			else if ((i < 5) && (j == d))
			{
				printf("%c", a);
			}
			else if (i == 4)
			{
				printf("%c", a);
			}
			else
			{
				printf("%c", b);
			}
		}
		d++;
		printf("\n");
	}

}