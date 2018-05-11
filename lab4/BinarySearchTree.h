//
// Created by usuryjskij on 10.05.18.
//

#ifndef LAB4_BST_H
#define LAB4_BST_H

class BinSearchTree {
    struct BSTNode
    {
        int value;
        BSTNode *pLeft;
        BSTNode *pRight;
        BSTNode(int value);
    };

    int numberOfElements;
    int leftSubtreeSize;
    int rightSubtreeSize;
    //balansowanie
    BSTNode *pRoot;

public:
    BinSearchTree();
    BinSearchTree(int const arr[], int size);
    ~BinSearchTree();
    int size();
    void deleteTree(BSTNode *node);

    //List toList();
    void insert(int value);
    void toString();
    bool contains(int value);
    void mirror(); //odwracamy drzewo
    // ...
};


#endif //LAB4_BST_H
