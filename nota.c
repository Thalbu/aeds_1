#include <stdio.h>
#define BUFSZ 256

int main(void){
    // Lendo arquivo de entrada:
    char line[BUFSZ];
    fgets(line, BUFSZ, stdin);

    // Declarando e inicializando a variável com a nota do aluno
    // lida do arquivo de entrada:
    int nota;
    sscanf(line, "%d\n", &nota);

    // Seu código aqui!
    char conceito;

    if ((nota>0)||(nota==0)||(nota==4)||(nota<4)) {
      conceito= 'F';
    }

    if (nota==5) {
      conceito= 'E';
    }

    if (nota==6) {
      conceito= 'D';
    }

    if (nota==7) {
      conceito= 'C';
    }

    if (nota==8) {
      conceito= 'B';
    }

    if ((nota==9) ||(nota==10)) {
      conceito= 'A';
    }

    printf("%c\n", conceito);
// Terminar de executar com sucesso:
    return 0;
}
