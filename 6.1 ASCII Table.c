#include <stdlib.h>
#include <stdio.h>
#define SIZE 26

//The application acquires sign then prints 25 next signs in ASCII table.

int main(void){
char ch[SIZE];
char a;
int counter;
printf("Podaj pierwsza litere ciagu 26 liter\n");
scanf("%c",&a);
for(counter=0;counter<SIZE;counter++,a++){
    ch[counter]=a;
    printf("%c",ch[counter]);
}

return 0;
}
