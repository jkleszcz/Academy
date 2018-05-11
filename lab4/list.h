#ifndef LIST_H
#define LIST_H

using std::cout;
using std::string;

class List {

    struct Node {
        int value; //Zamiast intu mozna szablon
        Node *pNext;
        Node(int value);
        string toString();
    };

    Node *pHead;
    unsigned int numberOfElements;

public:
    List();
    List(int const arr[], int size);
    ~List();
    void insert(int value);
    unsigned int size();
    void reverse();
    string toString();
    bool contains(int value);
    //mozna sprobowac posortowac
    //delete element, first, last
    //przeciazanie opertorow, dodawanie list, +=
};

#endif // LIST_H
