#include <stdio.h>
#include <stdlib.h>

int main() {
  int list[10],i,j, list2[8]  , max , min , max_pos , min_pos  ;
  float mo ;



  printf("Give the  1 number :" );
  scanf("%d",&list[0]);
  max = list[0];
  max_pos = 0 ;

  min = list[0];
  min_pos = 0;

  mo  = list[0];


  for (i = 1; i <= 9; i++) {
    printf("Give the %d number :",i+1 );
    scanf("%d", &list[i]);

    if (list[i] > max) {
      max_pos = i ;
      max = list[i];
    }

    if (list[i] < min) {
      min_pos = i ;
      max = list[i];
    }

    mo =  list[i] + mo;
  }

  j = 0;
  for ( i = 0; i < 10 ; i++) {
    if (list[i] != max && list[i] != min) {
      list2[j] = list[i];
      j +=  1;
    }

  }

  i = 0;
  while(i < 10){
  	printf("list1 :%d \n",list[i]);
  	i	+=	1;
  }
  
  i	=	0;
  while(i < j){
  	printf("list2 :%d \n",list2[i]);
  	i	+=	1;
  }



	printf("Average = %f\n", mo/10.0);
  return 0;
}
