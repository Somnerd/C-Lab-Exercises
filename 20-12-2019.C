#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int ip[4] , i , j , subnet[4] , check ;

    printf("Ip :");
  do {
    scanf("%d",&ip[0]);
    if (ip[0] >223 || ip[0]<1) {
      printf("Out of bounds \n");
    }
  } while(ip[0] < 1 || ip[0] > 223);

  for (i = 1; i <= 3; i++) {

      check = 1;
      do {
        scanf("%d",&ip[i]);

      if (ip[i] > 256 || ip[i] < 0) {
        printf("Not an acceptable ip  \n");
      }else{
        check = 0;
            }

      } while(check == 1);
  }


//if(subnet[4] !=252 || subnet[4] != 248 || subnet[4] != 240 || subnet[4] != 224 || subnet[4] != 192 || subnet[4] != 126 || subnet[4] != 0 )*/


  check = 0;
do {
    printf("Subnet Mask:");
    scanf("%d",&subnet[0]);
      for ( j = 0; j <= 8; j++) {
        if ((256 - pow(2,j)) == subnet[0]) {
          check = check + 1;
        }
      }


    scanf("%d",&subnet[1]);
      for ( j = 0; j <= 8; j++) {
        if ((256 - pow(2,j)) == subnet[1]) {
          check = check + 1;
      }
    }

    scanf("%d",&subnet[2]);
      for ( j = 0; j <= 8; j++) {
        if ((256 - pow(2,j)) == subnet[2]) {
          check = check + 1;
        }
      }

  scanf("%d",&subnet[3]);
    for ( j = 2; j <= 8; j++) {
      if ((256 - pow(2,j)) == subnet[3]) {
        check = check + 1;
      }
    }

    if(check == 4){
      	printf("Not an acceptable subnet mask\n");
  	   }

  } while(check != 0);

/*
252
248
240
224
192
128
0
*/
  printf("\nip: %d.%d.%d.%d \n",ip[0],ip[1],ip[2],ip[3]);
  printf("subnet: %d.%d.%d.%d \n",subnet[0],subnet[1],subnet[2],subnet[3]);

  system("PAUSE");
  return 0;
}
/*

Θα δημιουργισετε ενα προγραμμα στο οποιο θα εισαγετε μια εγκυρη ip διευθυνση και μια εγκυρη subnet mask  . Το πρ

*/
