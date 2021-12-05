#include <stdio.h>
#include <stdlib.h>

int addition(int x,int y) {
  return x + y ;
}

int main(void){
  int num1,num2,num3,num4,sum1,sum2;
  printf("Give 4 integers\n");
  scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
  return addition(addition(num1,num2),addition(num4,num3));
}
