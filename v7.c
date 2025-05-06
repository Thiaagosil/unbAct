#include <stdio.h>

int main() {
    int n;


    scanf("%d", &n);

    int vetorUm[10000], vetorDois[10000];



    for(int i = 0; i < n; i++){
        scanf("%d", &vetorUm[i]);

    }

    for(int i = 0; i < n; i++){
        scanf("%d", &vetorDois[i]);
    }

    int identicos = 1;
    for (int i = 0; i < n; i++){
        if(vetorUm[i] != vetorDois[i]){
            identicos = 0;
            break;
        } 
    }

    if(identicos){
        printf("sim\n");
    } else {
        printf("nao\n");

    }


    return 0;
}