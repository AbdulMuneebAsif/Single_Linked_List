//
// Created by miji-ustad on 10/8/24.
//

#ifndef NODE_H
#define NODE_H

class Node {
private:
    int data;
    Node* next;

public:

    Node(int data);
    Node();

    int getData();
    void setData(int data);

    Node* getNext();
    void setNext(Node* next);
};

#endif //NODE_H
