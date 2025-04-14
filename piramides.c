#include <stdio.h>

int main(){

    int x;

    scanf("%d", &x);

    for (int i = 1; i <= x; i++){
        for( int j = 1; j <= i; j++) {
            printf("%02d", i);
            if( j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 1; i <= x; i++){
        for( int j = 1; j <= i; j++) {
            printf("%02d", j);
            if( j < i) 
                printf(" ");
            
        }
        printf("\n");
    }


    return 0;
}



