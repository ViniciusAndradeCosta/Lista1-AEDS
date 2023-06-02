/*Matricula: 22.1.8108
Aluno: Vinícius Andrade Costa
Professor: Alexandre Magno
Materia: Algoritmos e estrutura de dados 1
Data 30/05/2023*/


#include <stdio.h>


int soma_rec(int vetor[], int n, int i){
if(i == n){ //caso base
return 0;
}

else{ //paso indutivo
return vetor[i] + soma_rec(vetor,n, i+1);
}
}


int main()
{

int vetor[10];
int i = 0, n = 10, tam = 0;


for(tam = 0; tam < 10; tam++){

printf("[%d] = ", tam+1);
scanf("%d", &vetor[tam]);

}


printf("Soma: %d\n", soma_rec(vetor, n, i));

return 0;
}
