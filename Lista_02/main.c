#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void bubble(int lista[], int tamanho){
    for (int i = 1; i < TAM; i++) {
        for (int j = 0; j < TAM - 1; j++){
            if (lista[j] > lista[j + 1]){
                int aux = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = aux;
            }
        }
    }
}

void insertion (int lista[], int tamanho){
    for (int i = 0; i < tamanho - 1; i++){
        if (lista[i] > lista[i+1]){
            int aux = lista[i + 1];
            lista[i+1] = lista[i];
            lista[i] = aux;
            int j = i - 1;
            while(j >= 0){
                if(aux < lista[j]){
                    lista[j + 1] = lista[j];
                    lista[j] = aux;
                }else{
                    break;
                }
                j = j-1;
            }
        }
    }
}

void selection(int lista[], int tamanho){

    for (int i = 0; i < TAM - 1; i++){
        int menor = i;
        for (int j = i + 1; j < TAM; j++){
            if(lista[menor] > lista[j]){
                menor = j;
            }
        }
        if(i != menor){
            int aux = lista[i];
            lista[i] = lista[menor];
            lista[menor] = aux;
        }
    }
}

int main()
{
    int lista[TAM];
    int i, aux;

    printf("Infome 5 numeros que voce deseja ordenar\n");
    for (i=0; i<TAM; i++){
        scanf("%d",&lista[i]);
    }

    printf("\n\nEsta foi a ordem que voce digitou:\n");
    for (i = 0; i < TAM ; i++){
        printf("%4d", lista[i]);
    }

    bubble(lista, TAM);
    //insertion(lista, TAM);
    //selection(lista, TAM);

    printf("\n\nA lista de elementos ja ordenados e:\n");
    for (i = 0; i < TAM ; i++){
        printf("%4d", lista[i]);
    }
}
