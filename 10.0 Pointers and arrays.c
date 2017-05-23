#include <stdio.h>

int doub(int tab[],int size);


void main()
{
    int tab[2][3]={{2,4,6},{8,10,12}};
    int size=3;
    int counter,j,k;
    for(counter=0;counter<2;counter++)
    {
        doub(tab[counter],3);
    }
    for (j=0;j<2;j++)
    {
        for(k=0;k<3;k++)
            printf("%d  ",tab[j][k]);
    }


    return 0;
}


int doub(int tab[],int size)
{
    int counter=0;
    for (;counter<size;counter++)
    {
        tab[counter]*=2;
    }
}
