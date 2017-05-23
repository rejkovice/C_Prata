#include <stdio.h>
#define TAX1 0.85
#define TAX2 0.8
#define TAX3 0.75

/*
Program calculates user's net salary depending how much he earned.
*/

int main(void)
{
    int hours;
    float salary_net=0.0,salary=0.0;
    printf("Enter number of hours you have worked this week\n");
    scanf("%d",&hours);
    if(hours>40){
        salary=40*hours+(hours-40)*1.5*40;
    }
    else
        salary=hours*40;
    printf("Your gross salary is: %.2f\n",salary);
    if (salary<=1200)
    {
        salary_net=salary*TAX1;
    }
    else if (salary>1200&&salary<=1800)
    {
        salary_net=1200*TAX1+(salary-1200)*TAX2;
    }
    else
    {
        salary_net=1200*TAX1+600*TAX2+(salary-1800)*TAX3;
    }
    printf("Your net salary is: %.2f\n",salary_net);
    printf("You have paid %.2f in taxes",salary-salary_net);
    return 0;
}
