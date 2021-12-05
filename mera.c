#include <stdlib.h>
#include <stdio.h>

int main() {
  int mera , day;
  system("CHCP 1253");
  system("CL5");

  printf("Give an integer between 1 and 7\n");
  scanf("%d", &day);
  while ((day < 1)||(day > 7)) {
    printf("Wrong input , Give an integer between 1 and 7\n");
    scanf("%d", &day);
  }
/*
  if (mera == 1) {
    printf("Sunday\n");
  }else if (mera == 2) {
  printf("Monday\n");
}else if (mera == 3){
  printf("Tuesday\n");
}else if (mera == 4){
  printf("Wednesday \n");
}else if (mera == 5 ){
  printf("Thursday\n");
}else if(mera == 6){
  printf("Friday\n");
}else if(mera == 7){
  printf("Saturday\n");
}else{
  printf("I don't fucking know !\n");
}
*/

switch (day) {
  case 1:{
    printf("Sunday\n");
  break;
}
  case 2:{
    printf("Monday\n");
  break;
}
  case 3:{
    printf("Tuesday\n");
  break;
}
  case 4:{
    printf("Wednesday\n");
  break;
}
  case 5:{
    printf("Thursday\n");
  break;
}
  case 6:{
    printf("Friday\n");
  break;
}
  case 7:{
    printf("Saturday\n");
  break;
}
  default:{
    printf("I dont fucking know !\n");
  break;
}
}
  system("PAUSE");
  return 0;
}
