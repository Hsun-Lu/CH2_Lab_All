#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a = 'X';
	char b = '-';
	int i, j, c, d;

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

	printf("\n(2)\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i == 0) || (i == 9) || (i == 1) || (i == 2) || (i == 8) || (i == 7) || (j == 0) || (j == 9) || (j == 1) || (j == 2) || (j == 8) || (j == 7))
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

	printf("\n(3)\n");
	c = 4;
	d = 5;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i < 5) && (j==c))
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
	system("pause");
	return 0;
}