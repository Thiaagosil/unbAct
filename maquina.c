#include <stdio.h>

int main() {

    int z, x;
    scanf("%d %d", &z, &x);

    int troco = x - z;
    
    int moedas[] = {500, 100, 50, 10, 5, 1};

    for (int i = 0; i < 6; i++) {
        int qtd = troco / moedas[i];
        printf("%d\n", qtd);
        troco = troco % moedas[i];
    }



}