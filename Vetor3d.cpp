// Deseja-serealizarumaclassevetor3dquepermita manipular vetores de três componentes 
// (coordenadas x, y e z) de acordo com as seguintes normas:
// • Possuisomenteumafunçãoconstrutoreéemlinha.
// • Temumafunção-membroigualquepermitesa- ber se dois vetores têm seus componentes ou 
// coor- denadas iguais (o endereço de igual será efetiva- do utilizando: a) transmissão por 
// valor; b) transmissão por endereço e c) transmissão por referência).

#include <iostream>
#include "Vetor3d.h"

using namespace std;

Vetor3d::Vetor3d(float x, float y, float z){
    setVetor(x, y, z);
}

void Vetor3d::setVetor(float xx, float yy, float zz){
    x = xx;
    y = yy;
    z = zz;
}

void Vetor3d::igual(Vetor3d& a){
    if(a.x == x && a.y == y && a.z == z){
        cout << "Os vetores das coordenadas são iguais" << endl;
    }else {
        cout << "Os vetores das coordenadas são diferentes" << endl;
    }
}