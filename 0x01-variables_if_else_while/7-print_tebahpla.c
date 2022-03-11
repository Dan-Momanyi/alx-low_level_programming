#include <stdio.h>
/**
 * Printing the alphabets in reverse
 */
int main(void)
{
	char c ='z';

	while(c>= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
