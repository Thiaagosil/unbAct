#include <stdio.h>


int main(){
    int n;


    scanf("%d", &n);


    int vetorUm[n],  vetorDois[n],  soma[n];


    for(int i = 0; i < n; i++){
        scanf("%d", &vetorUm[i]);
    }


    for(int i = 0; i < n; i++){
        scanf("%d", &vetorDois[i]);
    }

    for(int i = 0; i < n; i++){
        soma[i] = vetorUm[i] + vetorDois[i];
    }

    
    for(int i = 0; i < n; i++){
        if(i > 0) {
            printf(" ");
        }
        printf("%d", soma[i]);
    }



    return 0;
}