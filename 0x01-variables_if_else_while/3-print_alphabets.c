#include<stdio.h>
/**
 * main - the main function
 * Return: 0 always
 */
int main(void)
{
        int alphaU = 97;
	int alphaL = 65;

        while (alphaU < 123) /* print the alphabet using putchar */
        {
                putchar(alphaU);
                alphaU++;
        }
	while (alphaL < 91) /* print lowercase alphabets*/
	{
		putchar(alphaL);
		alphaL++;
	}
        putchar('\n');
        return (0);
}

