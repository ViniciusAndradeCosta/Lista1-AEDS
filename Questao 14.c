/*Matricula: 22.1.8108
Aluno: Vinícius Andrade Costa
Professor: Alexandre Magno
Materia: Algoritmos e estrutura de dados 1
Data 30/05/2023*/


int findSubstring(char* s, char* t) {
    
    if (*t == '\0') {
        return 0;
    }
  
    if (*s == '\0') {
        return -1;
    }
  
    if (*s == *t) {
        int position = findSubstring(s + 1, t + 1);
        
        if (position != -1) {
            return position + 1;
        }
    }
  
 
    int position = findSubstring(s + 1, t);
  
    if (position != -1) {
        return position + 1;
    }
  
    return -1; 
}
