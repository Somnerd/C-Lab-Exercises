#include "stdio.h"
#include "stdlib.h"

int main(){
  float temps[5][7],avg_cities_temps[5]={0},avg_days_temps[7]={0};
  int i,j;

  for (i = 0; i <= 4; i++) {
    for ( j = 0; j <= 6; j++) {
      printf("Temps for City- %d on day- %d : ",i+1,j+1);
      scanf("%f",&temps[i][j]);
    }
  }

  for ( i = 0; i <= 7; i++) {
    for (j = 0; j <= 5; j++) {
      avg_cities_temps[i] = temps[i][j] + avg_cities_temps[i];
    }
  }

    for ( i = 0; i <= 5; i++) {
      for (j = 0; j <= 7; j++) {
        avg_days_temps[i] = temps[i][j] + avg_days_temps[i];
      }
    }

    min_days_temp = avg_days_temps[1];
    for (i = 0; i < count; i++) {
      if (avg_days_temps[i] < min_days_temp) {
          min_days_temp = avg_days_temps[i];
      }
    }



    for (i = 0; i <= 5; i++) {
        printf("cities %.f\n",avg_cities_temps[i]/5);
      }


    for (i = 0; i <= 7; i++) {
        printf("days: %.f\n",avg_days_temps[i])/7;

    }

  printf("===============EXIT===============\n");
  system("PAUSE");
  return 0;
}
