#include "stdlib.h"
#include "stdio.h"

int main(){
  int i , j;
  char pinakas[3][3];


  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++ ){
      pinakas[i][j]='-';
    }
  }

  printf(" TIC TAC TOE \n");
  printf("%c |  %c  | %c\n"
         "---------------\n"
         "%c |  %c  | %c\n"
         "---------------\n"
         "%c |  %c  | %c\n",pinakas[0][0],pinakas[0][1],pinakas[0][2],pinakas[1][0],pinakas[1][1],pinakas[1][2],pinakas[2][0],pinakas[2][1],pinakas[2][2]);

  scanf("%s",&pinakas[0][0]);

  if (pinakas[0][0] == pinakas[0][1] && pinakas [0][2] == pinakas[0][1])||(pinakas[1][0] == pinakas[1][1] && pinakas [1][2] == pinakas[1][1])||(pinakas[2][0] == pinakas[2][1] && pinakas [2][2] == pinakas[2][1]) {
    /* code */
  }else if(pinakas[0][0] == pinakas[1][0 && pinakas[1][0] == pinakas[2][0] || pinakas[0][1] == pinakas[1][1] && pinakas[1][1] == pinakas[2][1] || pinakas[2][0]){}

  printf("%c |  %c  | %c\n"
         "---------------\n"
         "%c |  %c  | %c\n"
         "---------------\n"
         "%c |  %c  | %c\n",pinakas[0][0],pinakas[0][1],pinakas[0][2],pinakas[1][0],pinakas[1][1],pinakas[1][2],pinakas[2][0],pinakas[2][1],pinakas[2][2]);


system("PAUSE");
return 0;
}
