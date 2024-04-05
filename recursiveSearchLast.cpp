#include <iostream>
#include <vector>

template<typename T>
int recursiveSearchLast(const std::vector<T>& items, T target, int pos_last, int lastFound = -1) {
    if (pos_last < 0) return lastFound;
    if (items[pos_last] == target) lastFound = pos_last;
    return recursiveSearchLast(items, target, pos_last - 1, lastFound);
}

int main() {
    std::vector<int> items = {1, 2, 3, 2, 4, 2, 5};
    int lastOccurrence = recursiveSearchLast(items, 2, items.size() - 1);
    std::cout << "Last occurrence of 2 is at index: " << lastOccurrence << std::endl;
    return 0;
}
