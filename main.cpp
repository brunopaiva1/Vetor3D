// Deseja-serealizarumaclassevetor3dquepermita manipular vetores de três componentes 
// (coordenadas x, y e z) de acordo com as seguintes normas:
// • Possuisomenteumafunçãoconstrutoreéemlinha.
// • Temumafunção-membroigualquepermitesa- ber se dois vetores têm seus componentes ou 
// coor- denadas iguais (o endereço de igual será efetiva- do utilizando: a) transmissão por 
// valor; b) transmissão por endereço e c) transmissão por referência).

#include <iostream>
#include "Vetor3d.h"

int main(){
    Vetor3d a(0, 0, 0);
    Vetor3d b(0, 0, 0);

    a.igual(b);

    return 0;
}