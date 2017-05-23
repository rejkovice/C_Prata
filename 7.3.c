#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/*
Program gets integers from user input then calculates separate average of odd and even numbers.
*/

int main()
{
    int counter1=0,counter2=0,number;
    float av1=0.0,av2=0.0;
    while(scanf("%d", &number)!=0){
        if(number%2==0&&number!=0){
            counter1++;
            av1+=number;
        }
        else{
            counter2++;
            av2+=number;
        }
    }
    printf("The sum of odd numbers written is:%.3f\n",av2);
    printf("The sum of even numbers written is:%.3f\n",av1);
    printf("The average number of odd numbers written is:%.3f\n",av2/(float)counter2);
    printf("The average number of even numbers written is:%.3f\n",av1/(float)counter1);
    return 0;
}
