#include <stdio.h>

int main() {
    char letra, c;
    char texto[1001];
    int i = 0;

    scanf("%c\n", &letra);

    while ((c = getchar()) != '\n' && c != EOF && i < 1000) {
        texto[i++] = c;
    }
    texto[i] = '\0'; 

    int totalPalavras = 0;
    int palavrasComLetra = 0;
    int iLetra = 0;
    int contemLetra = 0;

    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] != ' ') {

            if (texto[i] == letra) {
                contemLetra = 1;
            }
        }

        if (texto[i] == ' ' || texto[i + 1] == '\0') {
            totalPalavras++;
            if (texto[i] != ' ' && texto[i] == letra) {
                contemLetra = 1;
            }
            if (contemLetra) {
                palavrasComLetra++;
            }
            contemLetra = 0;
        }
    }

    float resultado = (100.0 * palavrasComLetra) / totalPalavras;
    printf("%.1f\n", resultado);

    return 0;
}
