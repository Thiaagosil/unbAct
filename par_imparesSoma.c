#include <stdio.h>

int main() {
    int num;
    int soma_par = 0 , soma_impar = 0;

   
    while(1) {
        scanf("%d", &num);

        if(num == 0){
            break;
        }
         
        if(num % 2 == 0){
            soma_par += num;
        }



        else{
            soma_impar += num;
        }

    }

    printf("%d %d\n", soma_par, soma_impar);


    return 0;

}