#include "BSTNode.h"
#include <iostream>

using namespace std;

BSTNode::BSTNode()
{
    //construtor
    {
        left = NULL;
        right = NULL;
    }

}

BSTNode::BSTNode(int d)
{
    //construtor
    {
        data = d;
        left = NULL;
        right = NULL;
        height = 0;
    }

}

BSTNode::~BSTNode()
{
    //destructor
}

int BSTNode::getHeight()
{
    return height;
}

void BSTNode::setHeight(int h)
{
    height = h;
}

int BSTNode::getData()
{
    return data;
}


void BSTNode::setData(int d)
{
    data = d;
}

BSTNode* BSTNode::getLeft()
{
    return left;
}

BSTNode* BSTNode::getRight()
{
    return right;
}

void BSTNode::setRight(BSTNode *node)
{
    right = node;
}

void BSTNode::setLeft(BSTNode *node)
{
    left = node;
}
