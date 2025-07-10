#include <iostream>
#include <stack>

using namespace std;

// LIFO order. top() -> returns the top element;  pop() -> removes the top element

int main() {
    stack<string> s;
    s.push("love");
    s.push("babbar");
    s.push("kumar");
    cout << "pop element: " << s.top() << endl;
    s.pop();
    cout << "top element: " << s.top() << endl;
    cout << "size: " << s.size() << endl;
    cout << "empty: " << s.empty() << endl;
}