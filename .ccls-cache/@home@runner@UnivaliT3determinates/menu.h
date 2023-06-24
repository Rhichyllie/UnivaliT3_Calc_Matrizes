#include <stdio.h>
#include <stdlib.h>
#include "determinante_2X2.h"
#include "determinante_3X3.h"
#include "soma_matriz.h"
#include "subtracao_matriz.h"
#include "multiplicacao_matriz.h"

void menu(){
  int resp;
  printf("Operações de Matrizes:\n\n");
  printf("Por favor escolha um número para escolher a opção desejada!\n");
  printf("\n1 = Soma de Matrizes\n\n2 = Subtração de Matrizes\n\n3 = Multiplicação de Matrizes\n\n4 = Determinante 2X2\n\n5 = Determinante 3X3\n\n0 = Para Finalizar!\n\nResposta = ");
  scanf("%d", &resp);

  while (resp != 0){
    switch (resp){
      case 1:
      soma_matriz();
      break;
      case 2:
      sub_matriz();
      break;
      case 3:
      multi_matriz();
      break;
      case 4:
      det_2x2();
      break;
      case 5:
      det_3x3();
      break;
      default:
      printf("Número de escolha incorreto!\n\n");
    }
    printf("\n1 = Soma de Matrizes\n\n2 = Subtração de Matrizes\n\n3 = Multiplicação de Matrizes\n\n4 = Determinante 2X2\n\n5 = Determinante 3X3\n\n0 = Para Finalizar!\n\nResposta = ");
    scanf("%d", &resp);
  }
}