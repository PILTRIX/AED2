#include <stdio.h>
#include <stdlib.h>
#include "Questao08.h"

void entrada08(float *vkm){
    printf("Informe a velocidade do veiculo: \n");
    scanf("%f",vkm);

}
void processamento08(float *vkm,float *vms){
    *vms = *vkm / 3.6 ;
}
void saida08(float vms){
    printf("O veiculo esta a %.2f m/s \n", vms);
}
void questao08(void){
    float a,b;

    entrada08(&a);
    processamento08(&a,&b);
    saida08(b);
}
