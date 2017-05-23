#include <stdio.h>
#define NO 0
#define YES 1
#define STOP '#'

/*
Program gets text as an input then checks how many times the combination of "an" occurred .
*/

int main(void)
{
char ch;
int counter=0,flag=NO;
printf("Enter any text (type '#' to finish)\n");
while ((ch=getchar())!=STOP)
{
    if(ch=='a')
    {
        flag=YES;
    }
    if(ch=='n'&&flag==YES)
    {
        counter++;
        flag=NO;
    }
}
    printf("Combination of \"an\" occurred %d times ",counter);
	return 0;
}


