#include <stdio.h>

int main() {

    //comandos
    int a, b;


    
    scanf("%d %d", &a, &b);


    if(a == b){
        printf("empate\n");
    }
    else if (
        (a == 0 && (b == 2 || b == 3)) ||
        (a == 1 && (b == 0 || b == 4)) ||
        (a == 2 && (b == 1 || b == 3)) ||
        (a == 3 && (b == 1 || b == 4)) ||
        (a == 4 && (b == 0 || b == 2))
    ) {
        printf("A\n");
    } else {
        printf("B\n");
    }



    return 0;
}