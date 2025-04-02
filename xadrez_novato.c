#include <stdio.h>

int main()
{
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    int valorTorre = 1;
    int sequenciaTorre = 1;

    while (valorTorre <= 5)
    {
        printf("%d - Torre Direita\n", sequenciaTorre);
        valorTorre++;
        sequenciaTorre++;
    }

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    int valorBispo = 1;
    int sequenciaBisbo = 1;

    do
    {
        printf("%d - Bispo Direita/Cima\n", sequenciaBisbo);
        valorBispo++;
        sequenciaBisbo++;

    } while (valorBispo <= 5);

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    int valorRainha = 1;
    int sequenciaRainha = 1;

    for (int valorRainha = 1, sequenciaRainha = 1; valorRainha <= 8; valorRainha++, sequenciaRainha++)
    {
        printf("%d - Rainha Esquerda\n", sequenciaRainha);
    }

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    return 0;
}