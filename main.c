#include <stdio.h>

/* Exercise 1.12 */
void main()
{
	int c;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t')
		{
			while (c == ' ' || c == '\t')
				c = getchar();
			putchar('\n');
			putchar(c);
		}
		else 
			putchar(c);
		
	}
	
}
