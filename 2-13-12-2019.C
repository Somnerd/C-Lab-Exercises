/*να εισαγετε 10 ακεραιους απο το πληκτρολογιο σε εναν πινακα . στη συνεχεια θα αποιηκευετε τις αρτιες τιμες
σε αλλο πινακα και τις περιττες σε αλλο πινακα , και θα τυπωνετε ολους του πινακες
και να δηχνουμε τι λιστα με το μεγαλυτερο ποσοστο */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int pinakas[10],i,per,over_count,art_count,per_count,artioi[10],perittoi[10],mo ;

  mo = 0;
  per_count = 0;
  art_count = 0;
  for (i = 0; i <= 9; i++) {
    printf("Give the %d number :",i+1 );
    scanf("%d", &pinakas[i]);


    if(pinakas[i]%2 == 0 ){
      artioi[art_count] = pinakas[i];
      art_count +=  1;
    }else{
      perittoi[per_count] = pinakas[i];
      per_count +=  1;
    }
    mo =  mo + pinakas[i];
  }

printf("\n----perittoi----\n");
  i = 0;
  while(i <per_count ){
  	printf("perittoi :%d \n",perittoi[i]);
  	i	+=	1;
  }

  printf("\n----artioi----\n");
  i	=	0;
  while(i < art_count){
  	printf("artioi:%d \n",artioi[i]);
  	i	+=	1;
  }


  printf("\n----Pinakas----\n");
  i	=	0;
  while(i < 10){
  	printf("pinakas:%d \n",pinakas[i]);
  	i	+=	1;
  }

  if (art_count > per_count) {
    printf("\nPososto : %f %\n",art_count * 10.0 );
  }else{
    printf("\nPososto : %f %\n",per_count * 10.0 );
  }


  over_count = 0;
  for (i = 0;  i <10;  i++) {
    if (pinakas[i] > mo/10) {
        over_count += 1;
    }
  }


  per = (over_count/10)*100 ;
  printf("Percentage over average : %0.1f %\n",per);
  printf("Average = %f\n", mo/10.0);

  system("PAUSE");
  return 0;
}
