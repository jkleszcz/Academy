#include <iostream>
#include <sstream>
#include "list.h"


List::List(){
    this->pHead = 0;
    numberOfElements = 0;
}

List::List(int const arr[], int size){
    this->pHead = 0;
    this->numberOfElements = 0;
    for(int i=0 ; i<size ; ++i){
        this->insert(arr[i]);
    }

}

void List::insert(int value) {
    Node *node = new Node(value);
    node->value;
    if(!this->pHead){
        this->pHead = node;
        this->numberOfElements++;
    }else{
        Node *element = this->pHead;
        while(element->pNext){
            element = element->pNext;
        }
        element->pNext = node;
        this->numberOfElements++;
    }
}

List::~List() {
    while(this->pHead){
        Node *delNode = this->pHead;
        this->pHead = delNode->pNext;
        delete(delNode);
    }
}

unsigned int List::size() {
    return numberOfElements;
}

string List::toString() {
    if(!pHead)
        return "List is empty";
    string result = "HEAD -> ";
    Node *element = this->pHead;
    for(int i=0 ; i<this->numberOfElements ; ++i){
        result += element->toString();
        if(element->pNext){
            result += " -> ";
            element = element->pNext;
        }
    }
    return result;
}

void List::reverse() {
    if(!pHead)
        cout << "List is empty";
    else{
        Node *firstElement, *tmpElement;
        firstElement = this->pHead;
        while(firstElement->pNext){
            tmpElement = firstElement->pNext;
            firstElement->pNext = tmpElement->pNext;
            tmpElement->pNext = this->pHead;
            this->pHead = tmpElement;
        }
    }
}

bool List::contains(int value) {
    Node *element = this->pHead;
    while(element->pNext){
        if(element->value == value)
            return true;
        element = element->pNext;
    }
    return false;
}

List::Node::Node(int value) {
    this->value = value;
    this->pNext = 0;
}

string List::Node::toString() {
    std::stringstream ss;
    ss << this->value;
    return ss.str();
}
