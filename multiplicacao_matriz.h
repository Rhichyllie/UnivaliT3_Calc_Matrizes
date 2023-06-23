#include <stdio.h>
#include <stdlib.h>

void multi_matriz(){
  int lin1, col1, lin2, col2;

  printf("Digite a quantidade de linhas e colunas respectivamente à primeira matriz:\n");
  scanf("%d %d", &lin1, &col1);
  printf("Digite a quantidade de linhas e colunas respectivamente à segunda matriz:\n");
  scanf("%d %d", &lin2, &col2);

  double mat1[lin1][col1], mat2[lin2][col2], multi_mat[lin1][col2];
  
  if(col1 == lin2){
    for(int i = 0; i < lin1; i++){
      for(int j = 0; j < col1; j++){
        printf("\nMatriz 1: Por favor digite o valor para posição %dX%d: ", i+1 , j+1);
        scanf("%lf", &mat1[i][j]);
      }
    }
    for(int i = 0; i < lin2; i++){
      for(int j = 0; j < col2; j++){
        printf("\nMatriz 2: Por favor digite o valor para posição %dX%d: ", i+1 , j+1);
        scanf("%lf", &mat2[i][j]);
      }
    }
  }else{
    while(col1 != lin2){
      printf("Não é possível realizar soma de matrizes dos respectivos tamanhos %dX%d e %dX%d\n\n", lin1, col1, lin2, col2);
      printf("A quantidade de colunas da primeira matriz precisa ter  mesmo total de linhas da segunda matriz.\n\n");
      printf("Digite a quantidade de linhas e colunas respectivamente à primeira matriz:\n");
      scanf("%d %d", &lin1, &col1);
      printf("Digite a quantidade de linhas e colunas respectivamente à segunda matriz:\n");
      scanf("%d %d", &lin2, &col2);
    }
  }
  
  for (int i = 0; i < lin1; i++) {
      for (int j = 0; j < col2; j++) {
        multi_mat[i][j] = 0;
        for (int k = 0; k < col1; k++) {
          multi_mat[i][j] += mat1[i][k] * mat2[k][j];
        }
      }
  }

  printf("\nMatriz Original 1:\n");
  for(int i = 0; i < lin1; i++){
    printf("[ ");
    for(int j = 0; j < col1; j++){
      printf("%.2lf ",mat1[i][j]);
    }
    printf("]\n");
  }

  printf("\nMatriz Original 2:\n");
  for(int i = 0; i < lin2; i++){
    printf("[ ");
    for(int j = 0; j < col2; j++){
      printf("%.2lf ",mat2[i][j]);
    }
    printf("]\n");
  }

  printf("\nMatriz Multiplicada:\n");
  for(int i = 0; i < lin1; i++){
    printf("[ ");
    for(int j = 0; j < col2; j++){
      printf("%.2lf ", multi_mat[i][j]);
    }
    printf("]\n");
  }
}