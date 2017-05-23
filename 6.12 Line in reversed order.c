#include <stdio.h>

//Program read a line of text then writes it in reversed order.

int main(void){
char line[255];
int i=0;
while (scanf("%c",&line[i]),line[i]!='\n'){
    i++;
}
for(;0<=i;i--){
    printf("%c",line[i]);
}
printf("\n");

return 0;
}
