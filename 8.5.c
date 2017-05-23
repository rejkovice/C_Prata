#include <stdio.h>

/*
Program is guessing user's chosen number using bisection.
*/

int main(void)
{
	int min=0;
	int max=100;
	int number=50;
	char ch;

	printf("Choose integer from 1 to 100\n");
	printf("if displayed number is too low press 'l'\n");
	printf("if displayed number is too high press 'h'\n");
	printf("if guess is right press 'y'\n");
    printf("Is it %d?\n",number);
	while((ch=getchar())!='y')
    {
        while(getchar()!='\n')
            ;
        if (ch=='h')
            min=number;
        else if (ch=='l')
            max=number;
        else
        {
            printf("invalid input, try again");
            continue;
        }
        number=(min+max)/2;
        printf("Is it %d?\n",number);
    }
    printf("I guessed!\n");

	return 0;
}
