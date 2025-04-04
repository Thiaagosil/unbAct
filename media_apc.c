#include <stdio.h>


int main() {

    float n1, n2, n3; 
    float t;
    float l1, l2, l3, l4, l5;


    //NOTAS PROVAS
    scanf("%f %f %f", &n1, &n2, &n3);

    //NOTAS trabalhoFinal
    scanf("%f", &t);
    
    //NOTAS listaExercicio
    scanf("%f %f %f %f %f", &l1, &l2, &l3, &l4, &l5);

    float ml = 0;
    float mf = 0;

    ml = (l1 + l2 + l3 + l4 + l5) / 10;


    //NOTAS mediafinal

    mf = ((n1 + (n2*2) + (n3*3) + ( t* 2)) / 8) + ml;

    printf("%.2f\n", mf);
    



    return 0;
    
}


