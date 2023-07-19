#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int chave;
    struct No *prox;
    struct No *ant;
} No;

void imprimir(No *inicio) {
    No *atual = inicio;

    while (atual != NULL) {
        printf("Chave: %d\n", atual->chave);
        printf("Ponteiro para o nó anterior: %p\n", (void *)atual->ant);
        printf("Ponteiro para o próximo nó: %p\n", (void *)atual->prox);
        printf("-----------------------\n");

        atual = atual->prox;
    }
}

int main()
{
    No *n1 = malloc(sizeof(No));
    No *n2 = malloc(sizeof(No));
    No *n3 = malloc(sizeof(No));
    No *n4 = malloc(sizeof(No));

    n1->chave = 1;
    n2->chave = 2;
    n3->chave = 3;
    n4->chave = 4;

    n1->prox = n2;
    n2->prox = n3;
    n3->prox = n4;
    n4->prox = NULL;

    n1->ant = NULL;
    n2->ant = n1;
    n3->ant = n2;
    n4->ant = n3;

    imprimir(n1);

    return 0;
}