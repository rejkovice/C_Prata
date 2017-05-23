#include <stdio.h>
double power(double number, int pow);

/*
The program calculates the power of numbers. User passes two numbers then program displays
*/

int main()
{
    double number;
    int pow;
    printf("Enter the number and the power you want to raise it\n");
    while(scanf("%lf %d",&number,&pow)==2)
    {
        power(number,pow);
    }
    return 0;
}


double power(double number, int pow)
{
    double result=1;
    int counter;
    if(power==0&&number!=0)
        printf("%lf to the power of 0 equals 1\n",number);
    else if(number==0)
        printf("0 to the power of %d equals 0\n",pow);
    else
    {
        for(counter=0;counter<pow;counter++)
        {
            result*=number;
        }
     printf("%lf to the power of %d equals %lf\n",number,pow,result);
    }


}
