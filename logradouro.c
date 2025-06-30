#include <stdio.h>

struct tipoLogradouro {
    char tipo[80];
    char nome[80];
    char complemento[80];
};

void criaLinhaCSV(struct tipoLogradouro info, char linha[240]) {
    int pos = 0;
    int i = 0;

    while(info.tipo[i] != '\0') {
        linha[pos++] = info.tipo[i++];
    }

    linha[pos++] = ';';

    i = 0;
    while(info.nome[i] != '\0') {
        linha[pos++] = info.nome[i++];
    }

    linha[pos++] = ';';

    i = 0;
    while(info.complemento[i] != '\0') {
        linha[pos++] = info.complemento[i++];
    }

    linha[pos] = '\0';  
}

