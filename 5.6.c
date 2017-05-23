#include <stdio.h>
#include <stdlib.h>
void szescian(float n);
int main(){

float n;
printf("prosze podac liczbe w postaci ulamka dziesietnego\n");
scanf("%f",&n);
szescian(n);
return 0;

}

void szescian(float n){
    printf("%f",n*n*n);
}
