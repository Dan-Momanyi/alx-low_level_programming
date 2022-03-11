#include <stdio.h>
/**
 * Printing the alphabet excluding q and e
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if(c != 'q' && c != 'e')
		{
			putchar(c);
		
		}
		c++;
	
	}
	putchar('\n');
	return (0);


}
