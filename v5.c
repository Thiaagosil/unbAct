#include <stdio.h>


int main() {
    int z, y;

    scanf("%d", &z);

    int vetor[z];


    for(int i = 0; i < z; i++){
        scanf("%d", &vetor[i]);

    }
    

    scanf("%d", &y);

    int pertence = 0;
    for(int i = 0; i < z; i++){
        if(vetor[i] == y){
            pertence = 1;
            break;
        }

    }


    if(pertence){
        printf("pertence\n");
    } else
    {
        printf("nao pertence\n");
    }


    return 0;
}