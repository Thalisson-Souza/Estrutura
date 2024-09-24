/*  1 - Implemente uma função que receba como parâmetro uma matriz de inteiros de tamanho m x 
    n (alocada dinamicamente como um vetor simples) e imprima na tela os elementos
    armazenados nesta matriz. Esta função deve obedecer ao protótipo:
            void imprime_matriz (int m, int n, int* mat)                            */

#include <stdio.h>
#include <stdlib.h>

int* allocation(int m, int n){
    int *mat = (int*)malloc(m*n*sizeof(int));
        if(mat == NULL){
            printf("Memoria nao alocada");
            exit(1);
        }
        return mat;
}

void fillMatrix(int m, int n, int *mat){

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("Enter a value for the matrix at the position corresponding to row %d and column %d:\n", i,j);
            scanf("%d", &mat[i * n + j]);
        }
    }
}

void printMatrix(int m, int n, int *mat){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", mat[i * n + j]);
        }
    }
}

int main(){

    int sizeLINES, sizeCOLUMN;

    printf("what size are the matrix lines?\n");
    scanf("%d", &sizeLINES);

    printf("what size are the matrix column?\n");
    scanf("%d", &sizeCOLUMN);

    int *mat;
    mat = allocation(sizeLINES, sizeCOLUMN);

    fillMatrix(sizeLINES, sizeCOLUMN, mat);
    printMatrix(sizeLINES, sizeCOLUMN, mat);

    free(mat);
    return 0;
}