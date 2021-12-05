/* Deka ari8mous se pinaka kai ektiponoume ton pinaka , min , max , meso oro */
#include <stdio.h>
#include <stdlib.h>
#define SIZE  10

int main() {
  int min,max,list[SIZE] , i ;
  float mo;
  i = 0;
  printf("Give the 1st number in series \n");
  scanf("%d\n",&list[i]);


  min = list[0];
  max = list[0];
  mo  = 0;
  i = 1;
  do {
    printf("Give the %d number in series \n", i+1 );
    scanf("%d\n",&list[i]);

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
  printf("Mesos Oros  :%1.f\n"
          "Max :%d"
          "min : %d",mo/10,max, min);
  system("PAUSE");
  return 0;
}
/*
Να γραφει προγραμμα σε γλωσσα C το οποιο θα ζηταει απτον χρηστη να δωσει τιμες
σε ενα πινακα παραμετροπιοισιμου πληθους ακεραιων (χρηση #DEFINE ή #Const)
και στη συνεχεια  να εκυπωνει
α)  Τον μικροτερο βαθμο απο ολους
β)  Τον μεγαλυτερο βαθμο απο ολους
γ)  Τον μεσο μεσο ορο
δ)  Τον αρχικο πινακα σε οριζοντια διαταξη
ε)  Δευτερο πινακα που να διαθετει ολα τα  στοιχεια του προιγουμενου , με την ιδια σειρα
    εκτος απο τον μεγιστο και τον ελαχιστο .
    (Εστω οτι το μεγυστο και το ελαχιστο υπαρχουν μονο μια φορα στον πινακα)
*/
