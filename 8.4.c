#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


/*
Program calculates average number of letters per word.
*/

int main(void)
{
    bool flag_in_word=false;
    int ch,count_word=0,count_char=0;
    float average;

    while((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
        {
            count_char++;
            if(!flag_in_word)
            {
                count_word++;
                flag_in_word=true;
            }

        }
        else
                flag_in_word=false;

    }
    printf("word count:%d\n",count_word);
    printf("character count:%d\n",count_char);
    printf("average letters per word:%.2f",count_word/count_char);
    return 0;
}
