#include <stdio.h>
#define TAX1 0.85
#define TAX2 0.8
#define TAX3 0.75

int menu(void);
float sal(int rate);

int main(void)
{
    int state,rate;
    menu();
    while(1)
    {
        scanf("%d",&state);
        switch(state)
        {
        case 1:
            rate=35;
            sal(rate);
            break;
        case 2:
            rate=37;
            sal(rate);
            break;
        case 3:
            rate=40;
            sal(rate);
            break;
        case 4:
            rate=45;
            sal(rate);
            break;
        case 5:
            break;
        default:
            while (getchar() != '\n')
                ;
            menu();
            continue;
        }
        break;
    }


    return 0;
}

int menu(void)
{
    printf("Choose your hourly rate\n");
    printf("1) 35zl/h\n");
    printf("2) 37zl/h\n");
    printf("3) 40zl/h\n");
    printf("4) 45zl/h\n");
    printf("5) EXIT\n");
}
float sal(int rate)
{
    int hours;
    float salary_net=0.0,salary=0.0;
    printf("Enter number of hours you have worked this week\n");
    scanf("%d",&hours);
    if(hours>40){
        salary=rate*hours+(hours-40)*1.5*rate;
    }
    else
        salary=hours*rate;
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
