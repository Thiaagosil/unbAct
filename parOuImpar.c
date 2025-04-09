#include <stdio.h>  

main(){
    int aUM, JogadorUm, JogadorDois;
    int aDOIS, JogadorTres, JogadorQuatro;
    int aFinal, JogadorFinalUm, JogadorFinalDois;


    scanf("%d %d %d", &aUM, &JogadorUm, &JogadorDois);

    scanf("%d %d %d", &aDOIS, &JogadorTres, &JogadorQuatro);

    scanf("%d %d %d", &aFinal, &JogadorFinalUm, &JogadorFinalDois);

    char VencedorFMatch, VencedorFMatchtwo;


    // vencedor jogo 1
    if (((JogadorUm + JogadorDois) % 2 == 0 && aUM == 0) || ((JogadorUm + JogadorDois) % 2 == 1 && aUM == 1)) {
        VencedorFMatch = 'A';
    } else {
        VencedorFMatch = 'B';
    }

    // vencendor jogo 2

    if (((JogadorTres + JogadorQuatro) % 2 == 0 && aDOIS == 0) || ((JogadorTres + JogadorQuatro) % 2 == 1 && aDOIS == 1)) {
        VencedorFMatchtwo = 'C';
    } else {
        VencedorFMatchtwo = 'D';

    }

    // vencendor final
    if (((JogadorFinalUm + JogadorFinalDois) % 2 == 0 && aFinal == 0) || ((JogadorFinalUm + JogadorFinalDois) % 2 == 1 && aFinal == 1)) {
        printf("%c\n", VencedorFMatch);
    } else {
        printf("%c\n", VencedorFMatchtwo);
    }


    return 0;

}