#include <stdio.h>
#include "arvore.c"
#include <stdlib.h>

void main(){
    node *root = criaArvore(10);
    printf("Inserindo valores...\n");
    insertValue(root, 12);
    insertValue(root, 8);
    insertValue(root, 4);
    insertValue(root, 15);
    insertValue(root, 11);

    printTree(root);
    printf("\n");

    printf("Procurando o node 10 na arvore...\n");
    node *v = findValue(root, 10);
    printf("%d\n", v->v);

    printf("Altura da arvore: %d\n", getHeight(root));

    printf("Removendo o valor 15...\n");
    root =  removeValue(15, root);
    printTree(root);
    printf("\n");


    printf("Removendo o valor 8...\n");
    root =  removeValue(8, root);
    printTree(root);
    printf("\n");

    printf("Inserindo valroes...\n");
    insertValue(root, 5);
    insertValue(root, 1);
    printTree(root);
    printf("\n");



    printf("Removendo o valor 10...\n");
    root =  removeValue(10, root);
    printTree(root);
    printf("\n");
    
    printf("Tamanho da arvore: %d\n", size(root));

    printf("Soma dos numeros maiores que 10: %d\n", sumX(root, 10));
}