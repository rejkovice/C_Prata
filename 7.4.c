#include <stdio.h>
#define STOP '#'

/*
Program gets text as an input then swap every "." for the "!", and "!" with "!!".
*/

int main(void)
{
	char ch;
    while ((ch = getchar()) != STOP)
	{
		if (ch == '.')
			putchar('!');
		else if (ch == '!')
			printf("!!");
		else
			putchar(ch);
	}

	return 0;
}
