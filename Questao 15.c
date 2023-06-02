/*Matricula: 22.1.8108
Aluno: Vinícius Andrade Costa
Professor: Alexandre Magno
Materia: Algoritmos e estrutura de dados 1
Data 30/05/2023*/


int mdc(int n, int m){
    
    if(m<n && n%m == 0){
        return m;
    } else if(n<m){
        return mdc(m,n);
    } else{
        return mdc(m, n%m);
    }
}
