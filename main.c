#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#define SIZE 200000

int intcheck(int number;){

  char temp[SIZE];
  int number,i;
  bool flag;

  do {                           //The Start of the Do While Loop , to check whether the user has given an integer or something else
    flag =1;                     //Setting the flag to true , meaning that if no check happens , it wont be an infinite loop
         // Clears the console
    gets(temp);                   //  User input through the "gets" command in order to count as input even a (space) input
    if(strlen(temp)==0) {           // A check to see if the user gave an input or if he just pressed enter
      flag = 0;                         // If the above statement is true , then we set the flag to false , in order for the user to give an input again
    }else if(temp[0]!='+'&&temp[0]!='-'){ //Checks if the first variable of the array string is an arithmetic operator
      for (i = 0; i < strlen(temp); i++) {  //A for loop that will repeat itself for the full length of the size of the string
        if (isdigit(temp[i])!=0) {
          flag = flag*1;
        }else{
          flag = flag*0;
        }
      }
    }else if((temp[0]=='+'&&temp[1]!='+')||(temp[0]=='+'&&temp[1]!='-')||(temp[0]=='-'&&temp[1]!='+')||(temp[0]=='-'&&temp[1]!='-')){
      for (i=0;i<strlen(temp);i++) {
        if(isdigit(temp[i])!=0){
          flag = flag*1;
        }else{
          flag = flag*0;
        }
      }
    }

    if (flag == 0) {
      printf("WRONG! \n\a");
      system("PAUSE");

    }

  } while(flag ==0);

  number = atoi(temp);


  return number;
}


int main(){
  int i, max , num;
	i=0;
  printf("Give the %d number :",i+1);
  num = intcheck(num); //scanf("%d",&num );
  max = num;
  for ( i = 1; i <= 4; i++) {
    printf("Give the %d number :",i+1);
    num = intcheck(num);//scanf("%d",&num );

    if (num > max) {
      max = num;
    }
  }

  printf("MAX : %d\n", max);

  system("PAUSE");
  return 0;
}
