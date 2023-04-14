#include <stdio.h>
#include <stdlib.h>
#include "Questao24.h"

void entrada24(int *vcompra, int *vpago){
    printf("Informe o valor da compra \n");
    scanf("%d",vcompra);
    printf("Informe o valor recebido \n");
    scanf("%d",vpago);

}
void processamento24(int *vcompra, int *vpago, int *troco, int *c, int *d, int *u){
    if(*vpago<*vcompra){
        printf("pagamento negado");
    }else{
        *troco=*vpago-*vcompra;
        *c = *troco/100;
        *troco-=((*c)*100);
        *d = *troco/10;
        *troco-=((*d)*10);
        *u = *troco/1;
        printf("\nVoce dara de troco %d notas de 100 reais, %d notas de 10 reais e %d notas de 1 real\n",*c,*d,*u);
    }
}

void questao24(void){
    int a,b,c,d,e,f;

    entrada24(&a,&b);
    processamento24(&a,&b,&c,&d,&e,&f);
}
