#include <stdio.h>
#include <stdlib.h>

void soma_matriz(){
  int lin, col;

  printf("\nSoma de Matrizes:\n");
  printf("\nDigite a quantidade de linhas e colunas respectivamente das matrizes:\n");
  scanf("%d %d", &lin, &col);
  
  double mat1[lin][col], mat2[lin][col], soma_mat[lin][col];
  
    for(int i = 0; i < lin; i++){
      for(int j = 0; j < col; j++){
        printf("\nMatriz 1: Por favor digite o valor para posição %dX%d: ", i+1 , j+1);
        scanf("%lf", &mat1[i][j]);
      }
    }
    for(int i = 0; i < lin; i++){
      for(int j = 0; j < col; j++){
        printf("\nMatriz 2: Por favor digite o valor para posição %dX%d: ", i+1 , j+1);
        scanf("%lf", &mat2[i][j]);
      }
    }

  for (int i = 0; i < lin; i++) {
      for (int j = 0; j < col; j++) {
        soma_mat[i][j] = 0;
      }
  }
  for(int i = 0; i < lin; i++){
    for(int j = 0; j < col; j ++){
      soma_mat[i][j] = mat1[i][j] + mat2[i][j];
    }
  }

  printf("\nMatriz Original 1:\n");
  for(int i = 0; i < lin; i++){
    printf("[ ");
    for(int j = 0; j < col; j++){
      printf("%.2lf ",mat1[i][j]);
    }
    printf("]\n");
  }

  printf("\nMatriz Original 2:\n");
  for(int i = 0; i < lin; i++){
    printf("[ ");
    for(int j = 0; j < col; j++){
      printf("%.2lf ",mat2[i][j]);
    }
    printf("]\n");
  }

  printf("\nMatriz Somada:\n");
  for(int i = 0; i < lin; i++){
    printf("[ ");
    for(int j = 0; j < col; j++){
      printf("%.2lf ", soma_mat[i][j]);
    }
    printf("]\n");
  }
}
