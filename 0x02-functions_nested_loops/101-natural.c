#include<stdio.h>
/**
 * sum_multiple - prints multiple sum
 * Return: int
 */
int sum_multiple(void)
{
	int n = 1, sum = 0;

	while (n < 1024) /*sum it out*/
	{
		if ((n % 3) == 0 || (n % 5) == 0
				/*sum of multiple*/)
		{
			sum += n
		}
		n++;
	}
	return (sum);
}
/**
 * main - the main function
 * Return: 0 always
 */
int main(void)
{
	printf("%d\n", sum_multiple());
	return (0);
}
