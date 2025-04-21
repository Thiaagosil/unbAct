#include <stdio.h>

int main() {
    int R, nota, dia = 1;
    long long codigo;
    
    while (scanf("%d", &R) != EOF) {
        long long melhor_codigo = 0;
        int maior_nota = -1;
        
        for (int i = 0; i < R; i++) {
            scanf("%lld %d", &codigo, &nota); 
            
            if (nota > maior_nota || (nota == maior_nota && codigo < melhor_codigo)) {
                maior_nota = nota;
                melhor_codigo = codigo;
            }
        }
        
        printf("Dia %d\n", dia);
        printf("%lld\n", melhor_codigo);
        printf("\n");
        
        dia++;
    }
    
    return 0;
}