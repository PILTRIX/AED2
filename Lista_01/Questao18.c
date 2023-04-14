#include <stdio.h>
#include <stdlib.h>
#include "Questao18.h"

void entrada18(float *n1, float *n2){
    printf("informe a 1o nota \n");
    scanf("%f",n1);
    printf("Informe a 2o nota \n");
    scanf("%f",n2);

}
void processamento18(float *n1,float *n2,float *media){
    *media = (*n1 + *n2)/ 2.0 ;
}

void saida18(float media){
    if(media >= 7.0){
        printf("o aluno teve media %.2f e esta aprovado\n",media);
    }else if(media < 3.0){
        printf("O aluno teve media %.2f e esta reprovado\n", media);
    }else{
        printf("O aluno teve media %.2f e esta na prova final", media);
    }
}

void questao18(void){
    float a,b,c;

    entrada18(&a,&b);
    processamento18(&a,&b,&c);
    saida18(c);
}
