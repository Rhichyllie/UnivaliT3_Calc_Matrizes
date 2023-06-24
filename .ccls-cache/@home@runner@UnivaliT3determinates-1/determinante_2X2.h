#include <stdio.h>
#include <stdlib.h>

void det_2x2(){
  double mat[2][2], det;

  printf("\nDeterminate 2X2:\n");
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
      printf("\nPor favor digite o valor para posição %dX%d: ", i+1 , j+1);
      scanf("%lf", &mat[i][j]);
    }
  }

  det = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];

  printf("\nMatriz 2X2:\n");
  for(int i = 0; i < 2; i++){
    printf("[ ");
    for(int j = 0; j < 2; j++){
      printf("%.2lf ",mat[i][j]);
    }
    printf("]\n");
  }
  printf("\nDeterminante = %.2lf\n", det);
}