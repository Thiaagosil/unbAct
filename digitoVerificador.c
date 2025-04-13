#include <stdio.h> 


main() {
    //digito verificador 

    int i;

    scanf("%d", &i);

    int soma = 0;
    int multiplicador = 2;


    while(i > 0) {
        int numeroDigitado = i % 10;
        soma += numeroDigitado * multiplicador;
        i = i / 10;
        multiplicador++; 
    }

    int resto = soma % 11;
    int nd = 11 - resto;

    printf("%d \n", nd);


    return 0;
}