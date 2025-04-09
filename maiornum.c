#include <stdio.h>

int main() {
    int z, y, x, w;

    scanf("%d %d %d %d", &z, &y, &x, &w);

    int maior = z;

    if (y > maior) {
        maior = y;
    }
    if (x > maior) {
        maior = x;
    }
    if (w > maior) {
        maior = w;
    }

    printf("%d\n", maior);

    return 0;
}
