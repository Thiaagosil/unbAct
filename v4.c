#include <stdio.h>


int main() {

    int n;

    scanf("%d", &n);


    int vetor[n];


    for(int i = 0; i < n; i++){
       scanf("%d", &vetor[i]);         
    }

    //primeiro numero 
    int primeiro = 1;

    // pares
    for(int i = 0; i < n; i++){
        if(vetor[i] % 2 == 0){
            if (!primeiro) printf(" ");
            printf("%d", i);
            primeiro = 0;
        }
    }

    printf("\n");
    //primeiro numero 
     primeiro = 1;


    for(int i = 0; i < n; i++){
        if(vetor[i] % 2 != 0){
            if(!primeiro) printf(" ");
            printf("%d", i);
            primeiro = 0 ;
        }
        
    }
    printf("\n");

    
    return 0;
}