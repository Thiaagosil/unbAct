#include <stdio.h>

int main() {

    char nome[101];
    char primeiro[101];
    char ultimo[101];
    int i = 0,  j = 0,  k = 0; 
    char c;
    int palavra = 0;    

    scanf(" %[^\n]s", nome);

    while(nome[i] != ' ' && nome[i] != '\0') {
        c = nome[i];

        if(c >= 'A' && c <= 'Z') c += 32;
        primeiro[j++] = c;
        i++;
    }

    primeiro[j] = '\0';

    while (nome[i] != '\0')
    {
        if(nome[i] == ' '){
            palavra = i + 1;

        }
        i++;
    }
    

    while(nome[palavra] != '\0' && nome[palavra] != '\n'){
        c = nome[palavra];
        if(c >= 'A' && c <= 'Z') c += 32;
        ultimo[k++] = c;
        palavra++;
    }
        ultimo[k] = '\0';

        printf("%s.%s@unb.br\n", primeiro, ultimo);


    return 0;
}