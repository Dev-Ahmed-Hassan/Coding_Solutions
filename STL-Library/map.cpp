#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> m;
    m[1] = "babbar";
    m[13] = "kumar";
    m[2] = "love";
    m.insert({5, "bheem"});

    cout << "before erase" << endl;
    for (auto it : m) {
        cout << it.first << " " << it.second << endl;
    }

    cout << "finding -1e-13 --> " << m.count(-1e-13) << endl;
    m.erase(12);

    cout << "after erase" << endl;
    for (auto it : m) {
        cout << it.first << " " << it.second << endl;
    }

    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++) {
        cout << (*i).first << endl;
    }

    return 0;
}