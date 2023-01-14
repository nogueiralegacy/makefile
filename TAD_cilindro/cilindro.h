#ifndef ATIVIDADE1_CILINDRO_H
#define ATIVIDADE1_CILINDRO_H

typedef struct cilindro Cilindro;

Cilindro* cria (double raio, double altura);

void libera (Cilindro* cilindro);

double calculaArea (Cilindro* cilindro);

double calculaVolume (Cilindro* cilindro);

double altura (Cilindro* cilindro);

double raio (Cilindro* cilindro);
#endif //ATIVIDADE1_CILINDRO_H
