#include <stdio.h> 



int main() {

 int n;

    scanf("%d", &n);



    int vetor[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }


    int maior_valor = 1000000;
    int menor = maior_valor, segundo_menor = maior_valor, terceiro_menor = maior_valor;

    for(int i = 0; i < n; i++){
        int valor = vetor[i];

        if  (valor < menor) {
            terceiro_menor = segundo_menor;
            segundo_menor = menor;
            menor = valor;
        }
        else if (valor < segundo_menor) {
            terceiro_menor = segundo_menor;
            segundo_menor  = valor;
        }
        else if (valor < terceiro_menor)    {
            terceiro_menor = valor;
        }

    }

    printf("%d\n", segundo_menor);
    printf("%d\n", terceiro_menor);

  

    return 0;
}