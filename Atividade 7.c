#include <stdio.h>

int eh_triangulo_valido(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b +c > a);
    
}    
    
    
int main() {
    int a, b, c;
    printf("Digite o primeiro lado do triângulo:");
    scanf("%d", &a);
    printf("Digite o segundo lado do triângulo:");
    scanf("%d", &b);
    printf("Digite o terceiro lado do triângulo:");
    scanf("%d", &c);
    
    if (eh_triangulo_valido(a, b, c)) {
        printf("Os valores informados formam um triângulo válido.\n");
    } else {
        printf("Os valores informados NÃO formam um triângulo válido.\n");
    }
    return 0;
    
}




    
    

    
