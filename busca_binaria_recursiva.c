#include <stdio.h>

void busca_binaria(int vetor[], int valor, int esquerda, int direita, int contador)
{

    if (esquerda > direita)
        printf("\n\nValor não encontrado no vetor ordenado");

    int meio = (esquerda + direita) / 2;

    if (vetor[meio] == valor)
    {
        printf("\n\nValor %d encontrado na posição %d após %d operações", valor, meio, contador);
        printf("\n-------------------\n");
        return;
    }
    else if (vetor[meio] > valor)
    {
        busca_binaria(vetor, valor, esquerda, meio - 1, contador+=1);
    }
    else
    {
        busca_binaria(vetor, valor, meio + 1, direita, contador+=1);
    }
}

int main()
{
    int num;
    char controle, controle_tam;
    int busca;
inicio:
    do {
        printf("\nDigite o número de elementos a ser inserido ordenadamente no vetor: ");
        scanf("%d", &num);

        if (num > 200) {
            printf("\nValor excede o limite máximo de 200 elementos. Tente novamente.");
        }
    } while (num > 200);
    const int tam = num;

    int vetor[tam];

    for (int i = 0; i < tam; i++)
    {
        vetor[i] = i + 1;
    }

    do
    {
       printf("\n\nDigite o número que deseja buscar no vetor: \n");
       scanf("%d", &busca);

       busca_binaria(vetor, busca, 0, tam - 1, 1);

       printf("\n\nDeseja buscar outro número no vetor? s/n\n");
       scanf(" %c", &controle);

    } while (controle!='n' && controle!='N');

    printf("\n\nDeseja realocar o tamanho do vetor? s/n\n ");
    scanf(" %c", &controle_tam);

    if(controle_tam=='s' || controle_tam=='S')
        goto inicio;

    printf("\nFinalizando...\n ");

    return 0;
}