#include <stdio.h>
#define BUFSZ 256

int main(void){

    // Lendo arquivo de entrada:
    char line[BUFSZ];
    fgets(line, BUFSZ, stdin);

    // Lendo e inicializando o CPF lido da entrada:
    int CPF = 0;
    sscanf(line, "%d\n", &CPF);

    // Insira codigo para calcular a unidade e a dezena do CPF aqui.
    // Nao modifique as outras linhas.
    int dezena = 0;
    int unidade = 0;
    int X=CPF;
    int Y=0;
    int soma=0;
    int resto=0;

    int i=2;

    while (CPF>0) {
    Y = CPF % 10;
    CPF= CPF / 10;
    soma= soma + (Y * i);
    i= i + 1;
  }
    resto= soma%11 ;
    if ((resto== 0) || (resto==1)){
    dezena=0;
  }
    else
    if (resto== 10||9||8||7||6||5||4||3||2) {
    dezena= 11-resto;
  }
    Y=0;
    i=3;
    soma=dezena*2;
    CPF=X;
    while (X>0) {
    Y= X % 10;
    X= X / 10;
    soma= soma + (Y * i);
    i= i + 1;
  }
    resto= soma%11;
    if ((resto== 0) || (resto==1)) {
    unidade = 0;
  }
    else
    if (resto== 10||9||8||7||6||5||4||3||2) {
    unidade= 11-resto;
  }
    // Imprimir o resultado:
    printf("%09d-%d%d\n", CPF, dezena, unidade);

    // Terminar de executar com sucesso:
    return 0;
}
