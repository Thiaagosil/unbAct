#include <stdio.h>

int main() {

    int n;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++){
        int thums;
        if(i % 2 == 1) {
            thums = 3;
        } else {
            thums = 6;
        }

    
 
    for(int j = 0; j < thums; j++){
        printf("THUMS");
        if (j < thums - 1){
            printf(" ");
        }
    }

    printf("\n");
}
return 0;
}