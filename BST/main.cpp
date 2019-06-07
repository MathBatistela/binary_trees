#include "BST.h"
#include "BSTNode.h"
#include <iostream>

int main(){

    BST* avre = new BST();
    avre->inserir(10);
    avre->inserir(3);
    avre->inserir(15);
    avre->inserir(20);
    avre->inserir(2);
    int altura = avre->height();
    printf("Altura : %d\n", altura);
    int folhas = avre->qtNodes();
    printf("Folhas : %d\n", folhas);
    avre->preOrder();
    return 0;
}
