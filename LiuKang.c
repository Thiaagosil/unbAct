#include <stdio.h>
#include <math.h>

int main() {
    long long T;
    int Gm;
    scanf("%lld %d", &T, &Gm); // Lê T e Gm
    
    long long n = (long long)sqrt(T); // Calcula n inicial
    
    for (int i = 0; i < Gm; i++) {
        if (T % 2 == 0) {
            n = n / 2; // Se T é par, n = n/2
        }
        // Se T é ímpar, n permanece o mesmo
        long long term = 2 * n - 1; // Calcula o termo 2n-1
        long long next_T = term * term; // Próxima linha temporal
        printf("%lld\n", next_T); // Imprime a linha temporal
        T = next_T; // Atualiza T
        n = (long long)sqrt(T); // Atualiza n
    }
    
    return 0;
}