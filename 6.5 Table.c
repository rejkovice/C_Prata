#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter two numbers to define limits of your table: ");
    scanf("%d %d",&a,&b);
    printf("Number\t\tSquare\t\tCubic\n");

    for(a;a<=b;a++){
        printf("%6d%16d%15d\n",a,a*a,a*a*a);
    }
    return 0;
}
