#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;

    // Push back elements
    v.push_back(5);
    v.push_back(2);
    v.push_back(8);
    v.push_back(1);
    v.push_back(9);

    // Display original vector
    cout << "Original vector: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());

    // Binary search
    bool found = binary_search(v.begin(), v.end(), 5);
    cout << "Element 5 found: " << (found ? "Yes" : "No") << endl;

    // Lower and upper bound
    auto lower = lower_bound(v.begin(), v.end(), 5);
    auto upper = upper_bound(v.begin(), v.end(), 5);
    cout << "Lower bound of 5: " << (lower - v.begin()) << endl;
    cout << "Upper bound of 5: " << (upper - v.begin()) << endl;

    // Find max and min
    auto max_it = max_element(v.begin(), v.end());
    auto min_it = min_element(v.begin(), v.end());
    cout << "Max element: " << *max_it << endl;
    cout << "Min element: " << *min_it << endl;

    // Swap first and last elements
    swap(v[0], v[v.size() - 1]);
    cout << "After swap: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // Reverse vector
    reverse(v.begin(), v.end());
    cout << "After reverse: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // Rotate vector (move first element to end)
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After rotate: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}