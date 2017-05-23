#include <stdio.h>
#include <ctype.h>
int alphabet(char ch);

/*
Program checks if input is a letter and prints its number in alphabet.
*/


int main(void)
{
    char ch='a';
    char ch2='A';
    printf("%c %d\n%c %d\n%d",ch,ch,ch2,ch2,ch2-ch);

    while(scanf("%c",&ch)!=EOF)
    {
        if(isalpha(ch))
        alphabet(ch);
    }
    return 0;
}

int alphabet(char ch)
{
if(isupper(ch))
{
    printf("%c is a %d letter of alphabet\n",ch,ch-64);
}
else
    printf("%c is a %d letter of alphabet\n",ch,ch-96);
}
