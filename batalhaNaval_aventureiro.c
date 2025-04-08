#include <stdio.h>

int main()
{
    int tabela[10][10];

    for (int l = 0; l < 10; l++)
    {
        for (int c = 0; c < 10; c++)
        {
            tabela[l][c] = 0;
        }
    }
    // NAVIOS HORIZONTAL
    tabela[1][1] = 3;
    tabela[1][2] = 3;
    tabela[1][3] = 3;

    // NAVIOS VERTICAL
    tabela[8][8] = 3;
    tabela[7][8] = 3;
    tabela[6][8] = 3;

    // NAVIOS DIAGONAL
    tabela[3][0] = 3;
    tabela[4][1] = 3;
    tabela[5][2] = 3;

    // NAVIOS DIAGONAL 2
    tabela[4][5] = 3;
    tabela[3][6] = 3;
    tabela[2][7] = 3;

    for (int l = 0; l < 10; l++)
    {
        printf("%d >", l);

        for (int c = 0; c < 10; c++)
        {
            printf(" %d", tabela[l][c]);
        }
        printf("\n");
    }
    printf("    ^ ^ ^ ^ ^ ^ ^ ^ ^ ^\n");
    printf("    A B C D E F G H I J\n");
    return 0;
}