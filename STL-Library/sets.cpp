#include <iostream>
#include <set>

using namespace std;

int main() {
    // Declare a set of integers
    set<int> s;

    // Insert elements
    s.insert(5);
    s.insert(2);
    s.insert(8);
    s.insert(2); // Duplicate, will be ignored as set contains unique elements

    // Display size and elements using range-based for loop
    cout << "Set size: " << s.size() << endl;
    cout << "Elements: ";
    for (int elem : s) {
        cout << elem << " ";
    }
    cout << endl;

    // Find an element
    auto it = s.find(2);
    if (it != s.end()) {
        cout << "Found element: " << *it << endl;
    } else {
        cout << "Element not found" << endl;
    }

    // Check presence of an element
    if (s.count(5)) {
        cout << "Element 5 is present" << endl;
    }

    // Erase an element
    s.erase(it);

    // Display elements after erasure
    cout << "Elements after erasing 2: ";
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
