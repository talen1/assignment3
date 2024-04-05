#include "Queue.h"

template<class T>
Queue<T>::Queue() : head(nullptr), tail(nullptr), count(0) {}

template<class T>
Queue<T>::~Queue() {
    while (!empty()) {
        pop();
    }
}

template<class T>
void Queue<T>::push(T value) {
    Node* newNode = new Node(value);
    if (tail) {
        tail->next = newNode;
    } else {
        head = newNode;
    }
    tail = newNode;
    count++;
}

template<class T>
T Queue<T>::pop() {
    if (empty()) throw std::underflow_error("Queue is empty");
    Node* temp = head;
    T data = head->data;
    head = head->next;
    if (!head) {
        tail = nullptr;
    }
    delete temp;
    count--;
    return data;
}

template<class T>
T Queue<T>::front() const {
    if (empty()) throw std::underflow_error("Queue is empty");
    return head->data;
}

template<class T>
int Queue<T>::size() const {
    return count;
}

template<class T>
bool Queue<T>::empty() const {
    return count == 0;
}

template<class T>
void Queue<T>::moveToRear() {
    if (count > 1) {
        push(pop());
    }
}

template<class T>
void Queue<T>::display() const {
    Node* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Explicit template instantiation
template class Queue<int>;
