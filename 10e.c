#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int resolver(char *expressao, int *inicio){
	int total = 0; int cont;

	for(int i = *inicio; i < strlen(expressao); i++){
		if (i == *inicio && expressao[i] != '(') {
			total += expressao[i] - 48;
		}else if(i == *inicio && expressao[i] == '('){
		    *inicio+=1;
		    total += resolver(expressao, inicio);
		    i = *inicio;
		}
		if (expressao[i] == '+' && expressao[i + 1] != '(') {
			total += expressao[i + 1] - 48;
		} else if(expressao[i] == '+' && expressao[i + 1] == '(') {
			*inicio = i + 2;
			total += resolver(expressao, inicio);
			i = *inicio;
		}
		if (expressao[i] == '-' && expressao[i + 1] != '(') {
			total -= expressao[i + 1] - 48;
		} else if(expressao[i] == '-' && expressao[i + 1] == '(') {
			*inicio = i + 2;
			total -= resolver(expressao, inicio);
			i = *inicio;
		}
		if (expressao[i] == '*' && expressao[i + 1] != '(') {
			total *= expressao[i + 1] - 48;
		} else if(expressao[i] == '*' && expressao[i + 1] == '(') {
			*inicio = i + 2;
			total *= resolver(expressao, inicio);
			i = *inicio;
		}
		if (expressao[i] == '/' && expressao[i + 1] != '(') {
			total /= expressao[i + 1] - 48;
		} else if(expressao[i] == '/' && expressao[i + 1] == '('){
			*inicio = i + 2;
			total /= resolver(expressao, inicio);
			i = *inicio;
		}
		if (expressao[i] == ')'){
			*inicio = i + 1;
			//printf("inicio = %d\n", *inicio);
			return total;
			i = *inicio;
		}
	}
	return total;
}




int main() {
    char expressao[30] = {0};
    scanf("%s", expressao);

    int inicio = 0;
    int r = resolver(expressao, &inicio);
    printf("%d\n", r);

    return 0;
}
