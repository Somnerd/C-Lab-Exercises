#include <stdio.h>
#include <stdlib.h>

int main() {

  int num,i,min,max,sum;


    printf("Give any number.\n"
    "Give the number '-99' to exit the program.\n"
    "Input :");
    scanf("%d",&num);

    if (num != -99) {
      sum = 0;
      min = num;
      max = num;
      sum = sum + num;
      i = 1;
    }

    while(num != -99){

    printf("Give any number.\n"
    "Give the number '-99' to exit the program.\n"
    "Input :");
    scanf("%d",&num);
    i = i + 1;
    if (num > max ) {
      max = num ;
    }
    if (num < min) {
      min = num ;
    }
    sum = num + sum;
  }

  printf("Median : %d \n"
         "Max : %d  \n"
         "Min : %d \n",sum/i,max,min);

  system("PAUSE");
  return 0;
}

/*
Να γραφει αλγοριθμος σε γλωσσα στη C που να ριχνει 2 ζαρια 3 φορες
*/
