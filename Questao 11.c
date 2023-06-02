/*Matricula: 22.1.8108
Aluno: Vinícius Andrade Costa
Professor: Alexandre Magno
Materia: Algoritmos e estrutura de dados 1
Data 30/05/2023*/


int comprimento_string(char string[], int cont){
    
    if(string[cont] == '\0'){
        retur cont-1;
        
    }
    return comprimento_string(string, cont+1);
}
