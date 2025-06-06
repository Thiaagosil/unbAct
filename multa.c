#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia){
    //calcular a distancia e a velocidade entre os dois carros
    int tempo = tB - tA;

    double tempoEmHoras = tempo / 3600.0;

    double VelocidadeMedia = distancia / tempoEmHoras;


    return VelocidadeMedia;
}


int levouMulta(int tA, int tB, double distancia, double VelocidadeMaxima){
    double VelocidadeMedia = calculaVelocidadeMedia(tA, tB, distancia);

    if(VelocidadeMedia > VelocidadeMaxima){
        return 1;
    } else {
        return 0;
    }

}

int main(){
    int tA = 61200, tB = 63000;
    double distancia = 60.0;
     double VelocidadeMaxima = 120.0;

        printf("Multa? %d\n", levouMulta(tA, tB, distancia, VelocidadeMaxima));  


    tA = 54169, tB = 57346;
    distancia = 170.0, VelocidadeMaxima = 120.0;
    
    
    printf("Multa? %d\n", levouMulta(tA, tB, distancia, VelocidadeMaxima));  
    



    return 0;
}