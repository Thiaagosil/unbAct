#include <stdio.h>



int main(){
    int n;
    scanf("%d", &n);

    int mapa[500][500];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &mapa[i][j]);
        }
    }

    int max_soma = 0;
    int coluna = 0;

    for(int j = 0; j < n; j++) {
        int soma = 0;
        for(int i = 0; i < n; i++){
            soma += mapa[i][j];
        }

        if(soma > max_soma){
            max_soma = soma;
            coluna = j + 1;

        }
    }    

    printf("%d\n", coluna);



    return 0;
}