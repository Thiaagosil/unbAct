#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vetor[10000];
    long long soma = 0; 

    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    int media = soma / n; 

    int encontrou = 0;

    for(int i = 0; i < n; i++){
        if(vetor[i] > media){
            if(encontrou) {
                printf(" ");
            }
            printf("%d", vetor[i]);
            encontrou = 1;
        }
    }

    if(!encontrou){
        printf("0");
    }

    printf("\n");

    return 0;
}