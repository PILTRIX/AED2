#include <stdio.h>
#include <stdlib.h>
#define LIM 6

// Seção Reservada ao código Mergesort (INICIO)

void merge(int vetor[], int primparte[], int tamprimparte, int segparte[], int tamsegparte) {
    int i = 0, j = 0, k = 0;

    while (i < tamprimparte && j < tamsegparte) {
        if (primparte[i] < segparte[j]) {
            vetor[k] = primparte[i];
            i++;
        } else {
            vetor[k] = segparte[j];
            j++;
        }
        k++;
    }

    while (i < tamprimparte) {
        vetor[k] = primparte[i];
        i++;
        k++;
    }

    while (j < tamsegparte) {
        vetor[k] = segparte[j];
        j++;
        k++;
    }
}

void mergeSort(int vetor[], int tamatual) {
    if (tamatual < 2) {
        return;
    }

    int pontomedio = tamatual / 2;
    int primparte[pontomedio];
    int segparte[tamatual - pontomedio];

    for (int i = 0; i < pontomedio; i++) {
        primparte[i] = vetor[i];
    }

    for (int i = pontomedio; i < tamatual; i++) {
        segparte[i - pontomedio] = vetor[i];
    }

    mergeSort(primparte, pontomedio);
    mergeSort(segparte, tamatual - pontomedio);
    merge(vetor, primparte, pontomedio, segparte, tamatual - pontomedio);
}
// Seção Reservada ao código Mergesort (FIM)

// Seção reservada ao código Quicksort (INICIO)

int particiona(int vetor[], int indicecomeco, int indicefim) {
    int esq, dir, pivo, aux;
    esq = indicecomeco;
    dir = indicefim;
    pivo = vetor[indicecomeco];
    while(esq<dir){
        while(vetor[esq] <= pivo)
            esq++;
        while(vetor[dir] > pivo)
            dir--;
        if(esq < dir){
            aux = vetor[esq];
            vetor[esq] = vetor [dir];
            vetor[dir] = aux;
        }
    }
    vetor[indicecomeco] = vetor[dir];
    vetor[dir] = pivo;
    return dir;
}

void quickSort(int vetor[], int indicecomeco, int indiceindicefim) {
    if (indicecomeco < indiceindicefim) {
        int pivo = particiona(vetor, indicecomeco, indiceindicefim);
        quickSort(vetor, indicecomeco, pivo - 1);
        quickSort(vetor, pivo + 1, indiceindicefim);
    }
}

// Seção reservada ao código Quicksort (FIM)

int main() {
    int vetor[LIM];

    printf("Digite os %d numeros do vetor:\n", LIM);
    for (int i = 0; i < LIM; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor original: ");
    for (int i = 0; i < LIM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    mergeSort(vetor, LIM);
    //quickSort(vetor, 0, LIM - 1);

    printf("\nVetor ordenado: ");
    for (int i = 0; i < LIM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
