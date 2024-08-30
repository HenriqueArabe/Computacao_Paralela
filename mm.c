#include <stdio.h>
#include <stdlib.h>

int TAM = 2000;

int A[TAM][TAM];
int B[TAM][TAM];
int C[TAM][TAM] ={0};

int main(){
  int i, j ,k;

  //Inicialização
  for(i=0;j<TAM;i++){
      for(k=0;k<TAM;k++){
        A[i][j] = B[i][j] = 1;
      }
  }


  //Multiplicação
  for(i=0;i<TAM;i++){
      for(k=0;k<TAM;k++){
          for(j=0;j<TAM;j++){
              C[i][j] += A[i][k] * B[k][j];
          }
      }
  }

//Impressão

  fprintf(stdout, "%d\n", C[TAM-1][TAM-1]);

  return 0;
}
