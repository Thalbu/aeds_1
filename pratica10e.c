#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int resolver(char *expressao, int *inicio){
	int soma = 0; int cont;
	int tamanho = strlen(expressao);

	for(int i = *inicio; i < tamanho; i++){
		if (i == *inicio && expressao[i] != '(') {
			soma += expressao[i] - 48;
		}else if(i == *inicio && expressao[i] == '('){
		    *inicio+=1;
		    soma += resolver(expressao, inicio);
		    i = *inicio;
		}
		if (expressao[i] == '+' && expressao[i + 1] != '(') {
			soma += expressao[i + 1] - 48;
		} else if(expressao[i] == '+' && expressao[i + 1] == '(') {
			*inicio = i + 2;
			soma += resolver(expressao, inicio);
			i = *inicio;
		}
		if (expressao[i] == '-' && expressao[i + 1] != '(') {
			soma -= expressao[i + 1] - 48;
		} else if(expressao[i] == '-' && expressao[i + 1] == '(') {
			*inicio = i + 2;
			soma -= resolver(expressao, inicio);
			i = *inicio;
		}
		if (expressao[i] == '*' && expressao[i + 1] != '(') {
			soma *= expressao[i + 1] - 48;
		} else if(expressao[i] == '*' && expressao[i + 1] == '(') {
			*inicio = i + 2;
			soma *= resolver(expressao, inicio);
			i = *inicio;
		}
		if (expressao[i] == '/' && expressao[i + 1] != '(') {
			soma /= expressao[i + 1] - 48;
		} else if(expressao[i] == '/' && expressao[i + 1] == '('){
			*inicio = i + 2;
			soma /= resolver(expressao, inicio);
			i = *inicio;
		}
		if (expressao[i] == ')'){
			*inicio = i + 1;
			//printf("inicio = %d\n", *inicio);
			return soma;
			i = *inicio;
		}
	}
	return soma;
}




int main() {
    char expressao[30] = {0};
    scanf("%s", expressao);

    int inicio = 0;
    int r = resolver(expressao, &inicio);
    printf("%d\n", r);

    return 0;
}
