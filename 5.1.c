#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define godz 60

//Program przelicza minuty na godziny i minuty.
int main(){
int min;
printf("Prosze podac ilosc minut\n");
scanf("%d",&min);
int wynik=min/godz;
int reszta=min%godz;
printf("%d min to %d godz. i %d min.",min,wynik,reszta);
return 0;
}
