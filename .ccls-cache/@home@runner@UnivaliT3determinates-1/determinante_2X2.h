#include <stdio.h>
#include <stdlib.h>

void det_2x2(){
  double mat[2][2], det;

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
      printf("Por favor digite o valor para posição %dX%d: ", i+1 , j+1);
      scanf("%lf", &mat[i][j]);
    }
  }

  det = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
  printf("%lf", det);
}