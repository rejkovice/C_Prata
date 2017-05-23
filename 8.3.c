#include <stdio.h>
#include <ctype.h>

/*
Program counts uppercase and lowercase characters entered as string.
*/

int main(void)
{
    int ch,count_up=0,count_low=0;

    while((ch=getchar())!=EOF)
    {
        if(isupper(ch))
            count_up++;

        else if(islower(ch))
            count_low++;
    }
    printf("Lower case letters:%d\n",count_low);
    printf("Upper case letters:%d\n",count_up);

    return 0;
}
