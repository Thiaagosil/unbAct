#include <stdio.h>

int main() {

    //dados
    unsigned long long int cpf;
    int digitos[11];


    
    //pegando o cpf

    scanf("%llu", &cpf);



    // separando os digitos do final para o começo 

    for (int i = 10; i >= 0; i--) {
        digitos[i] = cpf % 10;
        cpf /= 10; 
    };

    //calculo do primeiro digito 

    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += digitos[i] * (10-i);
    }

     // soma do primeiro digito.
    int resto = soma % 11;
    int digitoUm = (resto < 2) ? 0 : 11 - resto;



    //calculo do segundo digito
    soma = 0;
    for(int i = 0; i < 9; i++){
        soma += digitos[i] * (11-i);
    }

    // soma do calculdo segundo digito
    soma += digitoUm * 2;
    resto = soma % 11;
    int digitoDois = (resto < 2) ? 0 : 11 - resto;



    //verificação para ver se tá correto..

    if (digitoUm == digitos[9] && digitoDois == digitos[10]) {
        printf("valido\n");
    } else {
        printf("invalido\n");
    }



    return 0;
}