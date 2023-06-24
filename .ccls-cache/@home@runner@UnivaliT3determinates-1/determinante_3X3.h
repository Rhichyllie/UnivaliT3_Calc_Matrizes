#include <stdio.h>
#include <stdlib.h>

void det_3x3(){
  double mat[3][3], det = 0; 

  printf("\nDeterminate 3X3:\n");
  for (int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("\nPor favor digite o valor para posição %dX%d: ", i+1 , j+1);
      scanf("%lf", &mat[i][j]);
    }
  }

  det = ((mat[0][0] * mat[1][1] * mat[2][2]) + (mat[0][1] * mat[1][2] *
mat[2][0]) + (mat[0][2] * mat[1][0] * mat[2][1])) - ((mat[0][1] * mat[1][0] * mat[2][2]) + (mat[0][0] * mat[1][2] * mat[2][1]) + mat[0][2] * mat[1][1] * mat[2][0]);

  printf("\nMatriz 3X3:\n");
  for(int i = 0; i < 3; i++){
    printf("[ ");
    for(int j = 0; j < 3; j++){
      printf("%.2lf ",mat[i][j]);
    }
    printf("]\n");
  }
  printf("\nDeterminante = %.2lf\n", det);
}