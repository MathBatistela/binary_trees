#ifndef BST_H
#define BST_H
#include "BSTNode.h"

class BST
{
    public:
        BST();
        virtual ~BST();

    BSTNode* getRoot();
    bool isEmpty();
	int height();
	int qtNodes();
	void inserir (int valor);
	void preOrder();
    void posOrder();
    void inOrder();

    protected:

    private:
    BSTNode *root;

    int height(BSTNode*);
    int qtNodes(BSTNode*);
    BSTNode* inserir(BSTNode*, int);
    void preOrder(BSTNode *no);
    void posOrder(BSTNode *no);
    void inOrder(BSTNode *no);

};

#endif // BST_H
