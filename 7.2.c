#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define STOP '#'

/*
Program displays every entered character along with its ASCII code. Every eight characters are printed in new line;
*/
int main()
{
    char ch;
    int counter;
    while((ch=getchar())!=STOP){
        counter++;
    printf("'%c' : %d\t",ch,ch);
    }
    if(counter%8==0){
        printf("\n");
    }


    return 0;
}
