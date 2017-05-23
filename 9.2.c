#include <stdio.h>
char char_row(char ch,int i, int j);

/*
Devise a function char_row(char ch,int i, int j) that prints the requested character in
columns i through j.
*/

int main (void)
{
    char ch;
    int i,j;

    while(scanf("%c %d %d",&ch,&i,&j)==3)
    {
        char_row(ch,i,j);
        while (getchar() != '\n') continue;
    }



    return 0;
}

char char_row(char ch,int i, int j)
{
    int counter1,counter2;
    for(counter1=0;counter1<i;counter1++)
    {
        for(counter2=0;counter2<j;counter2++)
        {
            putchar(ch);
        }

        putchar('\n');
    }



}
