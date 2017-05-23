#include <stdio.h>

int main(void)
{
    int ch,counter=0;

    while((ch=getchar())!=EOF)
    {
        if(ch>' ')
            printf("'%c':%d\t", ch, ch);
        else if(ch=='\n')
            printf("'\\n':%d\t",ch);
        else if(ch=='\t')
            printf("'\\t':%d\t",ch);
        else if(ch==' ')
            printf("' ':%d\t",ch);
        else
            printf("'%c':%d\t", ch+64, ch);
        counter++;
        if(counter%10==0)
        {
           putchar('\n');
        }
    }

    return 0;
}
