#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int maxNumber , minNumber , firstNumber , secondNumber , thirdNumber ;
/*	do {
*/

		printf("Give the first integer number : ");
		scanf("%d", &firstNumber);
		printf("\n");
		printf("Give the second integer number : ");
		scanf("%d", &secondNumber);
		printf("\n");
		printf("Give the third integer number : ");
		scanf("%d", &thirdNumber);
		printf("\n");

	printf("Median of three numbers : %f \n",(firstNumber+secondNumber+thirdNumber)/3.0);

	maxNumber = firstNumber;
	if (maxNumber < secondNumber) {
		maxNumber = secondNumber;
	}
	if(maxNumber < thirdNumber){
		maxNumber = thirdNumber;
	}

printf("Max number : %d\n", maxNumber );


minNumber = firstNumber;
if (minNumber > secondNumber) {
	minNumber = secondNumber;
}
if(minNumber > thirdNumber){
	minNumber = thirdNumber;
}

printf("Min number : %d\n", minNumber );


	return 0;
}


/*
	Askisi 1/11/2019 Homework
	Να γραφει προγραμμα σε γλωσσα C το οποιο να ζηταει 3 ακεραιους και να υπολογιζει και να εμφανιζει

		1:Τον μεσο ορο τους
		2:Τον μικροτερο απο ολους
		3:Τον μεγαλυτερο απο ολους

*/
