#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um valor em Km/h\n");
    float K, M;
    scanf("%f", &K);
    M = K/3.6;
    printf("O valor da velocidade em m/s eh: %.2f\n", M);
    return 0;
}
