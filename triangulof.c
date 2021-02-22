#include <stdio.h>
#define BUFSZ 256

int main(void)
{
    // Lendo arquivo de entrada:
    char line[BUFSZ];
    fgets(line, BUFSZ, stdin);

    // Declaracao das variaveis A e B:
    int N = 0;

    // Inicializando A e B com os dados lidos do arquivo:
    sscanf(line, "%d\n", &N);

    // Insira codigo para imprimir um triangulo de Floyd.
    int linha=1;
    int coluna=1;
    int x=1;
    printf("\n");
    for ( linha = 1; linha<=N; x++) {
      if (coluna==linha) {
        printf("%d\n", x);
        linha++;
        coluna=1;
      }
        else
        {
          printf("%d ", x);
          coluna++;
        }
   }
    // Terminar de executar com sucesso:
    return 0;
}
