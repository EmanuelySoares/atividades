#include <stdio.h>
int main() {
    float cotacao_dolar, valor_reais, valor_dolares;
    
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao_dolar);
    printf("Digite o valor em reais; ");
    scanf("%f", &valor_reais);
    valor_dolares = valor_reais / cotacao_dolar;
    printf("o valor em dolares e: %.2f\n", valor_dolares);
    return 0;
}
