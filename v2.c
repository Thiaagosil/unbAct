#include <stdio.h>



int main() {

    int n;

    scanf("%d", &n);



    int vetor[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);

    }



    int menor_indice = 0;


    for(int i = 1; i < n; i++) {
        if(vetor[i] < vetor[menor_indice]){
            menor_indice = i;
        }

    }


    printf("%d\n", menor_indice);



    return 0;
}