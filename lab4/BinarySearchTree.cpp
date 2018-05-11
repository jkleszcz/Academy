//
// Created by usuryjskij on 10.05.18.
//

#include <iostream>
#include "BinarySearchTree.h"

BinSearchTree::BinSearchTree() {
    this->numberOfElements = 0;
    this->rightSubtreeSize = 0;
    this->leftSubtreeSize = 0;
    this->pRoot = 0;
}

BinSearchTree::BinSearchTree(const int *arr, int size) {
    this->numberOfElements = 0;
    this->rightSubtreeSize = 0;
    this->leftSubtreeSize = 0;
    this->pRoot = 0;
    for(int i=0 ; i<size ; ++i){
        this->insert(arr[i]);
    }
}

BinSearchTree::~BinSearchTree() {
    deleteTree(this->pRoot);
}

void BinSearchTree::insert(int value) {
    BSTNode *node = new BSTNode(value);
    if(!this->pRoot){
        this->pRoot = node;
        this->numberOfElements++;
    }else{
        BSTNode *parent = this->pRoot;
        while(1){
            if(node->value < parent->value){
                if(parent->pLeft)
                    parent = parent->pLeft;
                else{
                    parent->pLeft = node;
                    this->leftSubtreeSize++;
                    this->numberOfElements++;
                    return;
                }
            }else{
                if(parent->pRight)
                    parent = parent->pRight;
                else{
                    parent->pRight = node;
                    this->numberOfElements++;
                    this->rightSubtreeSize++;
                    return;
                }
            }
        }
    }
}

int BinSearchTree::size() {
    std::cout << this->leftSubtreeSize<<std::endl;
    std::cout << this->rightSubtreeSize<<std::endl;
    return this->numberOfElements;
}

bool BinSearchTree::contains(int value) {
    BSTNode *element = this->pRoot;
    while(element){
        if(element->value == value)
            return true;
        else
            (element->value > value) ? element = element->pLeft : element = element->pRight;
    }
    return false;
}

void BinSearchTree::deleteTree(BinSearchTree::BSTNode *node) {
    if(node->pLeft)
        deleteTree(node->pLeft);
    if(node->pRight)
        deleteTree(node->pRight);
    delete(node);

}

BinSearchTree::BSTNode::BSTNode(int value) {
    this->value = value;
    this->pLeft = 0;
    this->pRight = 0;
}
