#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float result(float a, float b);

//The program retrieves the data and then validates the data entered.
//The result of the program action is to display the result of the equation.

int main()
{
   float a,b;
   while(scanf("%f %f",&a,&b)==2)
   {
       result(a,b);
   }

   return 0;
}


float result(float a, float b){
float c;
c=(a-b)/(a*b);
printf("%f\n",c);
}
