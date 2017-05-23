#include <stdio.h>
#include <stdlib.h>
#define SIZE 10


int main(void){
int i,j;
char sign;
printf("Enter the size of your Christmas Tree\n");
scanf("%c",&sign);
for(i=0;i<=SIZE;i++){
    for(j=0;j<=SIZE-i-1;j++){
        printf(" ");
    }

    for(j=0;j<i;j++){
        printf("%c",sign+j);
    }
    for(j=1;j<i;j++){
        printf("%c",sign+i-j-1);
    }
    j=0;
    printf("\n");
}

return 0;
}
