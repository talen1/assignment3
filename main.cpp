#include <iostream>
#include "Queue.h"       
#include "LinkedList.h"  


template<typename T>
int recursiveSearchLast(const std::vector<T>& items, T target, int pos_last, int lastFound = -1) {
    if (pos_last < 0) return lastFound;
    if (items[pos_last] == target) lastFound = pos_last;
    return recursiveSearchLast(items, target, pos_last - 1, lastFound);
}

int main() {
    // Demonstrate Queue functionality
    std::cout << "Queue Demonstration:" << std::endl;
    Queue<int> q;
    for (int i = 1; i <= 10; ++i) {
        q.push(i * 10);
    }
    q.display();
    q.moveToRear();
    std::cout << "After move to rear:" << std::endl;
    q.display();

    // Demonstrate Recursive Search for the Last Occurrence
    std::cout << "\nRecursive Search for Last Occurrence:" << std::endl;
    std::vector<int> items = {1, 2, 3, 2, 4, 2, 5};
    int lastOccurrence = recursiveSearchLast(items, 2, items.size() - 1);
    std::cout << "Last occurrence of 2 is at index: " << lastOccurrence << std::endl;

    // Demonstrate Insertion Sort on a Linked List
    std::cout << "\nLinked List Insertion Sort:" << std::endl;
    LinkedList<int> list;
    list.insertSorted(3);
    list.insertSorted(1);
    list.insertSorted(4);
    list.insertSorted(1);
    list.insertSorted(5);
    list.insertSorted(9);
    list.insertSorted(2);
    list.insertSorted(6);
    list.display();

    return 0;
}
