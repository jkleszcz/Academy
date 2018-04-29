#ifndef LIST_H
#define LIST_H
//ZADANIE: zrobic implementacje takich struktur

class List {
    struct Node {
        int value; //Zamiast intu mozna szablon
        Node *pNext;
    };

    Node *pHead;
public:
    List();
    List(int const arr[], int size);
    ~List();
    void insert(int value);
    void reverse(); //odwracanie listy
    //druga wersja reverse - moze cos zwracac
    string toString();
    bool contains(int value);
    //mozna sprobowac posortowac
    //przeciazanie opertorow, dodawanie list, +=
    // ...
};


class BinSearchTree {
    struct BSTNode
    {
        int value;
        BSTNode *pLeft;
        BSTNode *pRight;
    };
    //pole z liczeniem elementow
    //glebokosc poddrzewa
    //balansowanie
    BSTNode *pRoot;
public:
    BinSearchTree();
    BinSearchTree(int const arr[], int size);
    ~BinSearchTree();
    //List toList();
    void insert(int value);
    void toString();
    bool contains();
    void mirror(); //odwracamy drzewo
    // ...
};


#endif // LIST_H
