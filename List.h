//
// Created by miji-ustad on 10/8/24.
//

#ifndef LIST_H
#define LIST_H
#include "Node.h"

class List {
private:
    Node* head;
    Node *tail;

public:
    List();
    ~List();

    bool isEmpty();

    void insertAtHead(int);
    void insertAtTail(int);
    void insertAtTarget(int, int);

    Node* search(int);
    void print();
    void remove(int);


};

#endif //LIST_H
