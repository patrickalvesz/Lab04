#include <stdio.h>
#include <stdlib.h>

struct reg {
    int conteudo;
    struct reg *prox;
};

typedef struct reg celula;

void imprime(celula *le) {
    if (le != NULL) {
        printf("%d ", (*le).conteudo);
        imprime((*le).prox);
    }
}

celula *remove_elemento(celula *le) {
    if (le != NULL) {
        celula *p = (*le).prox;
        free(le);
        return remove_elemento(p);
    }
    return NULL;
}

int main() {
    celula *lista = NULL;
    for (int i = 0; i < 3; i++) {
        celula *novo = malloc(sizeof(celula));
        (*novo).conteudo = i;
        (*novo).prox = lista;
        lista = novo;
    }

    printf("Valores na lista: ");
    imprime(lista);
    printf("\n");

    printf("Memória gasta por cada instância da célula: %lu bytes\n", sizeof(celula));

    lista = remove_elemento(lista);

    printf("Lista após remover elementos: ");
    imprime(lista);
    printf("\n");

    return 0;
}

