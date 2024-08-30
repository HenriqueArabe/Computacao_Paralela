#include <stdio.h>
#include <stdlib.h>

int A[2000][2000];
int B[2000][2000];
int C[2000][2000] = {0};

int main() {
  int i, j, k;

  // Inicialização
  for (i = 0; i < 2000; i++) {
      for (j = 0; j < 2000; j++) {
        A[i][j] = B[i][j] = 1;
      }
  }

  // Multiplicação
  for (i = 0; i < 2000; i++) {
      for (k = 0; k < 2000; k++) {
          for (j = 0; j < 2000; j++) {
              C[i][j] += A[i][k] * B[k][j];
          }
      }
  }

  // Impressão
  fprintf(stdout, "%d\n", C[2000-1][2000-1]);

  return 0; // Adicionado retorno da função main
}
