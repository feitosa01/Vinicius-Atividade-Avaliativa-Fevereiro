#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "sorting.h"

void printArray(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void copyArray(int source[], int dest[], int n) {
    memcpy(dest, source, n * sizeof(int));
}

int main() {
    int option;
    int n = 1000; // tamanho do array
    int original[n];
    int arr[n];
    int i;

    srand(time(NULL));

    // gera array aleatório
    for(i = 0; i < n; i++)
        original[i] = rand() % 10000;

    printf("===== MENU ORDENACAO =====\n");
    printf("1 - Bubble Sort\n");
    printf("2 - Selection Sort\n");
    printf("3 - Insertion Sort\n");
    printf("4 - Quick Sort\n");
    printf("5 - Merge Sort\n");
    printf("6 - Shell Sort\n");
    printf("Escolha: ");
    scanf("%d", &option);

    copyArray(original, arr, n);

    clock_t start = clock();

    switch(option) {
        case 1:
            bubbleSort(arr, n);
            break;
        case 2:
            selectionSort(arr, n);
            break;
        case 3:
            insertionSort(arr, n);
            break;
        case 4:
            quickSort(arr, 0, n - 1);
            break;
        case 5:
            mergeSort(arr, 0, n - 1);
            break;
        case 6:
            shellSort(arr, n);
            break;
        default:
            printf("Opcao invalida.\n");
            return 0;
    }

    clock_t end = clock();

    double tempo = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\nTempo de execucao: %f segundos\n", tempo);

    return 0;
}