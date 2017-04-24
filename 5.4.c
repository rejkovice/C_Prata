#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Prosze podac liczbe pierwszych liczb naturalnych dla ktorych ma byc policzona ich suma\n");
    int licznik=0,liczba=0,suma=0;
    scanf("%d",&liczba);
    while(licznik++ <liczba){
        suma=suma+licznik;
    }
    printf("%d",suma);

    return 0;
    }
