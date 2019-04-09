#include <stdio.h>
#include <complex.h>
#include <math.h>

int main(){
  int j, k;
  int d = 4;
  double rhoR[4][4], rhoI[4][4];
  double _Complex rho[4][4];
  FILE *flR = fopen("rhoR", "r");
  FILE *flI = fopen("rhoI", "r");
  for(j = 0; j < 4; j++){
    for(k = 0; k < 4; k++){
      fscanf(flR,"%lf \t", *(rhoR+j*4+k));
      fscanf(flI,"%lf \t", *(rhoI+j*4+k));
      *(rho+j*4+k) = *(rhoR+j*4+k) + (*(rhoI+j*4+k))*I
    }
    fscanf(fl,"\n");
  }
  fclose(fl);
  printf("%lf \n", concurrence(&d, rho))
  /*for(j = 0; j < 4; j++){
    for(k = 0; k < 4; k++){
      printf("%lf \t", *(rhoR+j*4+k));
    }
    printf("\n");
  }*/
  return 0;
}
