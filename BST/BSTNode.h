#ifndef BSTNODE_H
#define BSTNODE_H
#include <iostream>



class BSTNode
{
    public:
        BSTNode();
        BSTNode(int);
        virtual ~BSTNode();

        int getData();
        int getHeight();
        void setHeight(int);
        void setData(int);
        BSTNode* getLeft();
        BSTNode* getRight();
        void setRight(BSTNode*);
        void setLeft(BSTNode*);

    protected:

    private:
        BSTNode *left, *right;
        int data;
        int height;
};

#endif // BSTNODE_H
