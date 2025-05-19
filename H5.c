#include <stdio.h> 

int to_minusc(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

int yep_ordenada(char palavra[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        
        if (to_minusc(palavra[i]) >= to_minusc(palavra[i + 1])) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int p;
    char palavra[43];
    scanf("%d", &p);
    for (int i = 0; i < p; i++) {
        scanf("%s", palavra);
        int tamanho = 0;
        while (palavra[tamanho] != '\0') {
            tamanho++;
        }
        if (yep_ordenada(palavra, tamanho)) {
            printf("%s: O\n", palavra);
        } else {
            printf("%s: N\n", palavra);
        }
    }
    return 0;
}