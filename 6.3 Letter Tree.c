#include <stdlib.h>
#include <stdio.h>
#define SIZE 6
//The application acquires sign which is going to be the top of your tree.

int main(void){
int i,j;
char top;
printf("Choose letter which is going to be the top of your tree\n");
scanf("%c",&top);
for(i=0;i<=SIZE;i++){
    for(j=0;j<=i;j++){
        printf("%c",top+j);
    }
    j=0;
    printf("\n");
}

return 0;
}
