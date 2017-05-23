#include <stdio.h>
/*
The program displays each prime number less than or equal to the positive integer.
*/

int main(void)
{
    int number,prime,counter1,counter2;
    char c;
    printf("Enter positive integer bigger than 1\n");

    while (scanf("%d", &number) != 1 || number < 1)
	{
		while ((c = getchar()) != '\n' && c != EOF) { }
		printf("Enter a positive integer: \n");
	}
    for(counter1=2;counter1<=number;counter1++)
    {
      for(counter2=2;counter2<counter1;counter2++)
      {
          prime=1;
          if(counter1%counter2==0)
          {
              prime=0;
              break;
          }

      }
      if (prime==1)
      {
          printf("%d is prime\n",counter1);
      }
    }




    return 0;
}
