// Deseja-serealizarumaclassevetor3dquepermita manipular vetores de três componentes 
// (coordenadas x, y e z) de acordo com as seguintes normas:
// • Possuisomenteumafunçãoconstrutoreéemlinha.
// • Temumafunção-membroigualquepermitesa- ber se dois vetores têm seus componentes ou 
// coor- denadas iguais (o endereço de igual será efetiva- do utilizando: a) transmissão por 
// valor; b) transmissão por endereço e c) transmissão por referência).

#ifndef VETOR3D_H
#define VETOR3D_H

class Vetor3d{
    private:
    float x;
    float y;
    float z;

    public:
    Vetor3d(float x, float y, float z);
    void setVetor(float xx, float yy, float zz);
    void igual(Vetor3d& a);
};

#endif //VETOR3D_H
