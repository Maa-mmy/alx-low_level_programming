#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all possible three digits combo
 *
 * Return: Always (0) success
 */
int main(void)
{
	int i, j, k; for (i = '0'; i < '9'; i++)
	{
		for (j = '1'; j < '9'; ++j)
		{
			for (k = '2'; k <= '9'; k++)
			{
				if (i < j && j < k)
					putchar(i);
				putchar(j);
				putchar(k);
				if (i != '7' || j != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
