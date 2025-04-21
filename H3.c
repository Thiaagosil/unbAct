#include <stdio.h>

// Função para verificar se um número é primo
int eh_primo(long long n) {
    if (n <= 1) return 0; // 0 e 1 não são primos
    if (n == 2) return 1; // 2 é primo
    if (n % 2 == 0) return 0; // Pares > 2 não são primos
    // Testa divisores ímpares até i * i <= n
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Função para verificar se um número é primo arrojado
int eh_primo_arrojado(long long n) {
    // Verifica todos os prefixos do número
    while (n > 0) {
        if (!eh_primo(n)) return 0; // Se algum não for primo, retorna falso
        n /= 10; // Remove o último dígito
    }
    return 1; // Todos os prefixos são primos
}

int main() {
    int T;
    long long n;
     
    // Lê o número de casos de teste
    scanf("%d", &T);
    
    // Processa cada caso de teste
    while (T--) {
        scanf("%lld", &n);
        // Imprime 'S' se for primo arrojado, 'N' caso contrário
        printf("%c\n", eh_primo_arrojado(n) ? 'S' : 'N');
    }
    
    return 0;
}