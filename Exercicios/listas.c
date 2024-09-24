#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int info;
    struct lista* prox;
} Lista;

Lista* cria_lista(void){    //Cria Lista Vazia
    return NULL;
}

void imprimeLISTA(Lista* list){
    Lista* p;
    for(p = list; p != NULL; p = p -> prox){
        printf("info = %d\n", p -> info);
    }
}

Lista* insere(Lista* list, int i){
    Lista* novo = (Lista*)malloc(sizeof(Lista));
        if(novo == NULL){
            printf("Memoria não alocada");
            exit(1);
        }

    novo -> info = i;
    novo -> prox = list;
    return novo;
}

int main(){

    Lista* list;

    list = cria_lista();

    list = insere(list,10);
    list = insere(list,25);
    list = insere(list,100);
    list = insere(list,300);
    list = insere(list,5000);
    list = insere(list,10000);

    imprimeLISTA(list);

    free(list);
    return 0;
}
