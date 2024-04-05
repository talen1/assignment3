#pragma once
#include <iostream>

template<class T>
class LinkedList {
public:
    LinkedList() : head(nullptr) {}
    ~LinkedList();
    void insertSorted(T value);
    void display() const;
private:
    struct Node {
        T data;
        Node* next;
        Node(T data, Node* next = nullptr) : data(data), next(next) {}
    };
    Node* head;
};

#include "LinkedList.cpp"
