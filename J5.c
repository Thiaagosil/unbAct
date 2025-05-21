#include <stdio.h>

int main(){
    int n;
    scanf("%d\n", &n);


    char palavra[1001], c;
    for(int i = 0; i < n; i++){
        int j = 0;

        while((c = getchar()) != '\n' && c != EOF && j < 1000){
            palavra[j++] = c;
        }
        palavra[j] = '\0';
    
        for(int k = 0; palavra[k] != '\0'; k++){
            if(palavra[k] >= 'A' && palavra[k] <= 'Z' || palavra[k] >= 'a' && palavra[k] <= 'z'){
                if(palavra[k] >= 'A' && palavra[k] <= 'Z'){
                    palavra[k] = 'A' + (palavra[k] - 'A' + 13 )  % 26;
                } else{
                    palavra[k] = 'a' + (palavra[k] - 'a' + 13 )  % 26;
                }
            }
            printf("%c", palavra[k]);
        }
        printf("\n");
    }





    


    return 0;
}