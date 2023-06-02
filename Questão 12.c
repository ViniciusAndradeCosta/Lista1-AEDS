/*Matricula: 22.1.8108
Aluno: Vinícius Andrade Costa
Professor: Alexandre Magno
Materia: Algoritmos e estrutura de dados 1
Data 30/05/2023*/


#include <stdio.h>
#include <locale.h>
#include <string.h>

void strinv(char str[]){

  int comprimento, i;

  comprimento = strlen(str) - 1;

    printf("\n");

    for(i=comprimento;i>=0;i--){

        printf("%c", str[i]);

    }

    printf("\n");

}

int main(){

    char palavra [1000];

    printf("Digite a palavra: ");
    scanf("%s", &palavra);

    strinv(palavra);

    return 0;
}
