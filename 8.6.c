#include <stdio.h>
#include <ctype.h>


/*
Program gets first non-whitespace character entered by user.
*/

int main(void)
{
    int ch;

    do
    {
        ch=getchar();
    }
    while(isspace(ch));

    putchar(ch);

    return 0;
}
