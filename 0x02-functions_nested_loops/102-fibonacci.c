#include<stdio.h>
/**
 * fibonacci - sequence
 * Return: void
 */
void fibonacci(void)
{
	int n1 = 1, n2 = 2, sum, counter = 0;

	printf("%d, %d, ", n1, n2);
	while (counter < 48)
	{
		sum = n1 + n2;
		if (counter == 47)
		{
			printf("%d\n", sum);
		}
		else
		{
			printf("%d, ", sum);
		}
		n1 = n2;
		n2 = sum;
		counter++;
	}
}
i**
 * main - main
 * Return: 0 always
 */
int main(void)
{
	fibonacci();
	return (0);
}
