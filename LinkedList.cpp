#include "LinkedList.h"

template<class T>
LinkedList<T>::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

template<class T>
void LinkedList<T>::insertSorted(T value) {
    Node** ptr = &head;
    while (*ptr && (*ptr)->data < value) {
        ptr = &(*ptr)->next
