#include <stdio.h>

/*
Program counts number of entered characters. Simulating EOF ends program.
*/
int main(void)
{
    int count=0;
    while(getchar()!=EOF)
    {
        count++;
    }
    printf("Characters count:%d",count);
    return 0;
}
