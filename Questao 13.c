/*Matricula: 22.1.8108
Aluno: Vinícius Andrade Costa
Professor: Alexandre Magno
Materia: Algoritmos e estrutura de dados 1
Data 30/05/2023*/


int achar_substring(char* s, char* t) {
    // Caso base: se a string t for vazia, então é uma substring
    if (*t == '\0') {
        return true;
    }
  
    // Caso base: se a string s for vazia e t não for vazia, então não é uma substring
    if (*s == '\0') {
        return false;
    }
  
    // Se o primeiro caractere de s é igual ao primeiro caractere de t
    if (*s == *t) {
        // Chamada recursiva para verificar se o restante de s e t são iguais
        return isSubstring(s + 1, t + 1);
    }
  
    // Chamada recursiva para verificar se t é uma substring do restante de s
    return isSubstring(s + 1, t);
}
