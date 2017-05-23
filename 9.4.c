#include <stdio.h>

/*
Program computes harmonic mean of a two numbers.
*/


double harm(double a, double b);

int main(void)
{
    double a,b;
    while(scanf("%lf %lf",&a,&b)==2)
    {
       printf("%lf\n",harm(a,b));
       printf("Enter two numbers\n");
    }

    return 0;
}


double harm(double a, double b)
{
    return 2/(1/a+1/b);

}
