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
		switch(ch){
		case '.':
            putchar('!');
            break;
		case '!':
            printf("!!");
            break;
		default :
            putchar(ch);
            }
	}

	return 0;
}
