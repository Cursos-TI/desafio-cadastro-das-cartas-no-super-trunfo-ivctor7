#include <stdio.h>

int main()
{
    printf("##########################\n");
    int numeroT = 1;
    while (numeroT <= 5)
    {
        printf("%d - Torre: Direita!\n", numeroT);
        numeroT++;
    }
    printf("##########################\n");

    int numeroB = 1;
    do
    {
        printf("%d - Bispo: Cima / Direita!\n", numeroB);
        numeroB++;
    } while (numeroB <= 5);

    printf("##########################\n");

    for (int numeroR = 1; numeroR <= 8; numeroR++)
    {
        printf("%d - Rainha: Esquerda!\n", numeroR);
    }

    printf("##########################\n");

    int num1, num2;

    for (num1 = 1; num1 == 1; num1++)
    {
        num2 = 0;
        while (num2 < 2)
        {
            printf("Cavalo: Baixo!\n");
            num2++;
        }
        printf("Cavalo: Esquerda!\n");
    }
    printf("##########################\n");

    return 0;
}
