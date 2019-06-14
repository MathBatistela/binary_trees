#ifndef BST_H
#define BST_H
#include "BSTNode.h"

class Tree
{
    public:      
    virtual bool isEmpty() = 0;
	virtual int height() = 0;
	virtual int qtNodes() = 0;
	virtual void inserir (int valor) = 0;
	virtual void preOrder() = 0;
    virtual void posOrder() = 0;
    virtual void inOrder() = 0;

    protected:

    private:

    virtual int height(BSTNode*) = 0;
    virtual int qtNodes(BSTNode*) = 0;
    virtual BSTNode* inserir(BSTNode*, int) = 0;
    virtual void preOrder(BSTNode *no) = 0;
    virtual void posOrder(BSTNode *no) = 0;
    virtual void inOrder(BSTNode *no) = 0;

};

class BST : public Tree
{
    public:
        BST();
        virtual ~BST();

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

class AVL : public Tree
{
    public:
        AVL();
        virtual ~AVL();
        
};

#endif // BST_H
