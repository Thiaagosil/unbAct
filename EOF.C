#include <stdio.h>

int main() {

    int n, count = 0;

    while(scanf("%d", &n) == 1) {
        count++;
    }

    printf("%d\n", count);

    return 0;
}