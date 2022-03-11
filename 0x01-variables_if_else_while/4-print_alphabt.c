#include<stdio.h>
/**
 * main - this is the main function
 */
int main(void)
{
	int alpha = 97;

	while (alpha < 123) /* print alphabets till false*/
	{
		/* print if alpha is not 11 or 113*/
		if (alpha != 11 || alpha != 113)
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
