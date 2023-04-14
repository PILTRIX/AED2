#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao10.h"

void entrada10(char **a){
    printf("Digite a senha: \n");
	scanf("%s",a);
}
void processamento10(char **a){
    char *sc = "LINGUAGEMC";
    if(strcmpi(a,sc)== 0){
		printf("Senha correta\n");
	}else{
		printf("Senha errada\n");
	}
}
void questao10(void){
    char a,b;

    entrada10(&a);
    processamento10(&a);
}
