#include <stdio.h>
#include <math.h>

int main() {
    long long T;
    int Gm;
    scanf("%lld %d", &T, &Gm); 
    
    long long n = (long long)sqrt(T);
    
    for (int i = 0; i < Gm; i++) {
        if (T % 2 == 0) {
            n = n / 2;
        }
     
        long long term = 2 * n - 1;
        long long next_T = term * term; 
        printf("%lld\n", next_T);
        T = next_T; 
        n = (long long)sqrt(T);
    }
    
    return 0;
}
