#include <stdio.h>

int encaixa(int a, int b) {

    if (b > a) {
        int temp = b;
        int digits_b = 0;
        while (temp > 0) {
            digits_b++;
            temp /= 10;
        }
        temp = a;
        int digits_a = 0;
        while (temp > 0) {
            digits_a++;
            temp /= 10;
        }
        if (digits_b > digits_a) return 0;
    }
    
    while (b > 0) {
        if (a % 10 != b % 10) return 0;
        a /= 10;
        b /= 10;
    }
    return 1;
}


int segmento(int a, int b) {
 
    int menor = a, maior = b;
    if (b < a) {
        menor = b;
        maior = a;
    }
    

    if (menor == 0) return 1;
    

    int temp = maior;
    while (temp >= menor) {
        if (encaixa(temp, menor)) return 1;
        temp /= 10;
    }
    
    return 0;
}