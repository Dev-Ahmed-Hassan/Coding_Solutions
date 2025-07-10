#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    // d.pop_front();
    // The main difference betweene this and the vecors is how they store data.
    // Deques allow O(1) insertion deletion on both ends while vectors/arrays have O(n) for front and O(1) for end.
    // We use deques only when we need faster updation on both ends.
    // Vectors have reallocation on insertion on front

    cout << endl;
    cout << "Print First Index Element --> " << d.at(1) << endl;
    cout << "Print Second Index Element --> " << d.at(0) << endl;
    cout << "front " << d.front() << endl;
    cout << "back " << d.back() << endl;
    cout << "Empty or not " << d.empty() << endl;
    cout << "before erase size" << d.size() << endl;
    cout << "before erase members: ";
    for (int i : d) {
        cout << i << " ";
    }
    cout << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erase " << d.size() << endl;
    for (int i : d) {
        cout << i << endl;
    }
    cout << endl;
}