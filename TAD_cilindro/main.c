#include <stdio.h>
#include "cilindro.h"

int main()
{
    Cilindro *cilindro = cria(2, 3);
    printf("*Dados de um cilindro*\n");
    printf("Altura: %.2f\n", altura(cilindro));
    printf("Raio: %.2f\n", raio(cilindro));
    printf("Volume: %.2f\n", calculaVolume(cilindro));
    printf("Area: %.2f\n", calculaArea(cilindro));
    libera(cilindro);
}
