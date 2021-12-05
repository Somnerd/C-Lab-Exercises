#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float num1,num2;
	char sym;	
		
	printf(" pros8esi = '+' , aferesi = '-' , pollaplasiasmos = '*' , diairesi = '/' \n");
	do{
		scanf("%f %c %f",&num1,&sym,&num2);
	}while((num2==0)&&(sym='/'));
	switch (sym) {
	  case '+':
	    printf("= %.2f",num1 + num2);
	    break;
	  case '-':
	    printf("= %.2f",num1 - num2);
	    break;
	  case '*':
	    printf("= %.2f",num1 * num2);
	    break;
	  case '/':
	    if(num2!=0){
	      printf("= %.2f",num1 / num2);
	      break;
	    }else{
	    	printf("Unable to divide with zero!!!");
		}
	}
	
	

	return 0;
}
