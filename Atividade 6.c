#include <stdio.h>
int main() {
    float distancia, velocidade, tempo;
    printf("Digite a distancia a ser percorrida (em km): ");
    scanf("%f", &distancia);
    printf("Digite a velocidade media do carro (em km/h): ");
    scanf("%f", &velocidade);
    tempo = distancia / velocidade;
    printf("0 tempo estimado da viagem e; %.2f horas\n", tempo);
    return 0;
}
