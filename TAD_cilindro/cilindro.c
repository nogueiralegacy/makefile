#include <math.h>
#include <stdlib.h>

#include "cilindro.h"
 struct cilindro{
    double raio;
    double altura;
};

Cilindro* cria (double raio, double altura) {
    Cilindro* cilindro = (Cilindro*) malloc(sizeof(Cilindro));
    cilindro->raio = raio;
    cilindro->altura = altura;
    return cilindro;
}

void libera (Cilindro* cilindro) {
    free(cilindro);
}

double calculaArea (Cilindro* cilindro) {
    return 2 * M_PI * cilindro->raio * cilindro->altura + 2 * M_PI * pow(cilindro->raio, 2);
}

double calculaVolume (Cilindro* cilindro) {
    return M_PI * pow(cilindro->raio, 2) * cilindro->altura;
}

double altura (Cilindro* cilindro) {
    return cilindro->altura;
}

double raio (Cilindro* cilindro) {
    return cilindro->raio;
}
