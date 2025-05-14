    #include <stdio.h>


    int main() {
        char str[100];
        int n;
        int maior = 0;

        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            scanf("%s", str);




            int tamanho = 0;
            while(str[tamanho] != '\0'){
                tamanho++;
            }


            if(tamanho > maior){
                maior = tamanho;
            }
        }

        printf("%d", maior);


        return 0;
    }