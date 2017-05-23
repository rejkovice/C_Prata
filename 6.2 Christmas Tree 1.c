#include <stdlib.h>
#include <stdio.h>

//The application acquires size of tree and then prints given number of rows.

int main(void){
int size,i,j;
printf("Enter the size of your Christmas Tree\n");
scanf("%d",&size);
for(i=1;i<=size;i++){
    for(j=1;j<=i;j++){
        printf("$");
    }
    j=0;
    printf("\n");
}

return 0;
}
