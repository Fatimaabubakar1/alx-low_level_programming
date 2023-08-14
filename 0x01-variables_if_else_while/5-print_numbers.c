#include <stdio.h>


/**
 * main - program that prints the alphabet in lowercase and upper case
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 10; num > 0; num++)

	{
	if (num != 5 && num != '9')
	putchar(num);
	}

	putchar('\n');

	return (0);
}
