#include <stdio.h>
#include <stdlib.h>
void spaces(int n);


int main(void){
char c1,c2,reference;
printf("Enter sign between 'A' and 'Z'\n");
scanf("%c",&reference);
printf("%d\n",reference);
for(c1='A';c1<=reference;c1++){
       spaces(reference-c1);
       for(c2='A';c2<c1;c2++){
        printf("%c",c2);
       }
       for(;c2>='A';c2--){
        printf("%c",c2);
       }


       printf("\n");


}
return 0;
}


void spaces(int n){
unsigned int i;
for(i=0;i<n;i++){
printf(" ");}

}



