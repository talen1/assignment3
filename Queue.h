#pragma once
#include <iostream>

template<class T>
class Queue {
public:
    Queue();
    ~Queue();
    void push(T value);
    T pop();
    T front() const;
    int size() const;
    bool empty() const;
    void moveToRear();
    void display() const; // Utility function to display the queue
private:
    struct Node {
        T data;
        Node* next;
        Node(T data, Node* next = nullptr) : data(data), next(next) {}
    };
    Node *head, *tail;
    int count;
};
