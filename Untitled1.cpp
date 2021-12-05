/* Deka ari8mous se pinaka kai ektiponoume ton pinaka , min , max , meso oro */
#include <stdio.h>
#include <stdlib.h>
#define SIZE  10

int main() {
  int min,max,list[SIZE] , i ;
  float mo;
  
  printf("Give the 1st number in series \n");
  scanf("%d\n",&list[0]);


  min = list[0];
  max = list[0];
  mo  = 0;
  i	=	1;
  
  do {
    printf("Give the %d number in series :", i+1 );
    scanf("%d",&list[i]);
   

    if (max < list[i]) {
      max = list[i];
    }
    if (min > list[i]) {
      max = list[i];
    }
    mo  = list[i] + mo ;
  
   i = i + 1;
  } while(i < 10);

  for (i = 0; i < 10; i++) {
    printf("%d\n",list[i] );
  }
  printf("/n	Mesos Oros  :%1.f\n"
          "Max :%d"
          "min : %d",mo/10,max ,min);
  system("PAUSE");  
  return 0;
}

