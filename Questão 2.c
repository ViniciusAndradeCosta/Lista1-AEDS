/*Matricula: 22.1.8108
Aluno: Vinícius Andrade Costa
Professor: Alexandre Magno
Materia: Algoritmos e estrutura de dados 1
Data 30/05/2023*/


#include <stdio.h>

int encontrarMaiorElemento(int vetor[], int tamanho) {
    
    if (tamanho == 1) {
        return vetor[0];
    }
    
    int subconjunto_maior = encontrarMaiorElemento(vetor, tamanho - 1);
    
    if (subconjunto_maior > vetor[tamanho - 1]) {
        return subconjunto_maior;
    } else {
        return vetor[tamanho - 1];
    }
}

int main() {
    int vetor[] = {5, 8, 3, 12, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    
    int maiorElemento = encontrarMaiorElemento(vetor, tamanho);
    
    printf("O maior elemento no vetor eh: %d\n", maiorElemento);
    
    return 0;
}
