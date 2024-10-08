//
// Created by miji-ustad on 10/8/24.
//

#include <iostream>
#include "List.h"

using namespace std;

 // ================================= Node Class ===================================

Node::Node() {
 data = 0;
 *next = NULL;
}

Node::Node(int data) {
 this->data = data;
 this->next = NULL;
}

int Node::getData() {
 return data;
}
void Node::setData(int data) {
 this->data = data;
}

Node* Node::getNext() {
 return next;
}

void Node::setNext(Node* next) {
 this->next = next;
}


 // ====================================== List Class =================================

List::List() {
 head = NULL;
 tail = NULL;
}

List::~List() {
 Node* current = head;
 Node* previous = NULL;
}

bool List::isEmpty() {
 if (head == NULL) {
  return true;
 }
 else {
  return false;
 }
}

void List::insertAtHead(int data) {
 if (isEmpty()) {
  Node* temp = new Node(data);
  head = temp;
  tail = temp;
 }
 else {
  Node* temp = new Node(data);
  temp->setNext(head);
  head = temp;
 }
}

void List::insertAtTail(int data) {
 if (isEmpty()) {
  insertAtHead(data);
 }
 else {
  Node* temp = new Node(data);
  tail->setNext(temp);
  tail = temp;
 }
}

Node* List::search(int value) {
 Node* temp = head;
 while(temp != NULL)
 {
  if (temp->getData() == value)
   return temp;
  else
   temp = temp->getNext();
 }
 return NULL;
}

void List::insertAtTarget(int value, int data) {
 Node* temp = new Node(value);

 if(temp == NULL) {
  return;
 }
 else if(temp == tail) {
  insertAtTail(data);
 }
 else {
  Node* newNode = new Node(data);
  newNode->setNext(temp->getNext());
  temp->setNext(newNode);
 }
}

void List::print() {
 Node* temp = head;
 while (temp != NULL) {
  cout << temp->getData() << "\t\t";
  temp = temp->getNext();
 }
}

void List::remove(int target) {
 Node* temp = head;
 Node* previous = NULL;

 while (temp != NULL) {
  if (temp->getData() == target) {
   break;
  }
  else {
   previous = temp;
   temp = temp->getNext();
  }
 }

 if (temp == NULL) {
  return;
 }
 else if (temp == tail) {
  tail = previous;
  tail->setNext(NULL);
  delete temp;
 }
 else if (temp == head) {
  head = head->getNext();
  temp->setNext(NULL);
  delete temp;
 }
 else {
  previous->setNext(temp->getNext());
  temp->setNext(NULL);
  delete temp;
 }
}


