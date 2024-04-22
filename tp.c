#include <stdio.h>
#include "automato.h"

#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>


int main() {
    int tam, geracoes, **automato, **matrizAuxiliar, cont = 0;

    lerQuantidades(&tam, &geracoes);
    
    automato = alocarReticulado(tam);
    matrizAuxiliar = alocarReticulado(tam);
    leituraReticulado(automato, tam);

    evoluirReticulado(automato, matrizAuxiliar, geracoes, tam, cont);
    imprimeReticulado(automato, tam);

    desalocarReticulado(automato, tam);
    desalocarReticulado(matrizAuxiliar, tam);

    return 0;
}