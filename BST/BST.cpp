#include "BST.h"
#include <iostream>

using namespace std;

BST::BST()
{
    //ctor
    root = NULL;
}

BST::~BST()
{
    //dtor
}

bool BST::isEmpty()
{
    return root==NULL;
}

int BST::height()
{
	return height(root); //altura da arvore é a altura do seu nó raiz
}

int BST::height(BSTNode *no)
{
	if (no == NULL)
		return -1;
	int leftHeight = height(no->getLeft());
	int rightHeight = height(no->getRight());
	if (leftHeight < rightHeight)
		return 1 + rightHeight;
	else
		return 1 + leftHeight;
}

int BST::qtNodes()
{
    return qtNodes(root);
}

int BST::qtNodes(BSTNode* no)
{
    if (no == NULL)
		return 0;
	int qtleft = qtNodes (no->getLeft());
	int qtright = qtNodes (no->getRight());
	return qtleft + qtright + 1;
}

void BST::inserir (int valor)
{
    printf("Inserindo %d\n",valor);
    root = inserir(root,valor);
    //printf("Raiz: %d\n", root->getData());
}

BSTNode* BST::inserir(BSTNode* node, int valor)
{
    /*Se é uma arvore ou subarvore vazia, cria 1 novo nó e retorna*/
    if (node == NULL)
       	return new BSTNode(valor);
    if (valor < node->getData())
    {
        if (node->getLeft() != NULL)
            node->setLeft(inserir(node->getLeft(), valor));
        else
            node->setLeft(new BSTNode(valor));
    //Verifica se o valor a ser inserido é maior que o no corrente da árvore, se sim vai para subarvore direita
    }
    else if (valor > node->getData())
            {
                //Se tiver elemento no no direito continua a busca
                if (node->getRight() != NULL)
                    node->setRight(inserir(node->getRight(),valor));
                else //Se nodo direito vazio insere o novo no aqui'
                	node->setRight(new BSTNode(valor));
            }
    return node;
}

void BST::preOrder()
{
    preOrder(root);
}

void BST::inOrder()
{
    inOrder(root);
}

void BST::posOrder()
{
    posOrder(root);
}

void BST::preOrder(BSTNode *no)
{
    if (no!=NULL)
    {
        cout<<no->getData()<<endl;
        preOrder(no->getLeft());
        preOrder(no->getRight());
    }
}

void BST::posOrder(BSTNode *no)
{
    if (no!=NULL)
    {
        posOrder(no->getLeft());
        posOrder(no->getRight());
        cout<<no->getData()<<endl;
    }
}

void BST::inOrder(BSTNode *no)
{
    if (no!=NULL)
    {
        inOrder(no->getLeft());
        cout<<no->getData()<<endl;
        inOrder(no->getRight());

    }
}



