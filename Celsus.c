#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, valor;  // Declaração de variaveis

    printf("Digite o grau em celsus: ");  // Usuario deve entrar com uma temperatura em Celsus
    scanf("%f", &a);

    valor = (a * 1.8) + 32;  // Formula usada pra o calculo

    printf("O temperatura em Fahrenheit eh: %f", valor);  // Rsultado é exibido na tela
    scanf("%f", &valor);

    return 0;
}
