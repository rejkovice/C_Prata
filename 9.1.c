#include <stdio.h>

double min(double x, double y);

int main (void)
{
    double x,y;
    printf("Enter two double, program will determine which number is minimum of the two")
    while(scanf("%lf %lf",&x,&y)==2)
    {
        printf("The minimum of %.2lf and %lf is %.2lf",x,y,min(x,y));
    }



    return 0;
}


double min(double x, double y)
{
    return x<y?x:y;
}
