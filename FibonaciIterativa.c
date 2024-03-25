#include <stdio.h>

int main()
{
    int termo1 = 0, termo2 = 1, proxTermo, qtde_termos;
    printf("Digite o número de termos da série de Fibonacci: ");
    scanf("%d", &qtde_termos);
    printf("Série de Fibonacci:\n");

    for (int i = 0; i < qtde_termos; i++)
    {
        if (i <= 1)
        {
            proxTermo = i;
        }
        else
        {
            proxTermo = termo1 + termo2;
            termo1 = termo2;
            termo2 = proxTermo;
        }
        printf("%d, ", proxTermo);
    }
    return 0;
}