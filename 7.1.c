#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define STOP '#'
#define YES 1
#define NO 0

/*
Program counts number of characters, lines and words in given input;
*/
int main()
{
    char c;
    int flag_word=NO;
    int count_line=1;
    int count_word=0;
    int count_char=0;
    while((c=getchar())!=STOP){
        count_char++;
        if  (!isspace(c)&&flag_word==NO){
                count_word++;
                flag_word=YES;
        }
        if (isspace(c)&&flag_word==YES){
            flag_word=NO;
        }
        if (c=='\n'){
            count_line++;
        }

    }
    printf("\nNumber of characters:%d\nNumber of lines: %d\nNumber of words: %d",count_char,count_line,count_word);
    return 0;
}
