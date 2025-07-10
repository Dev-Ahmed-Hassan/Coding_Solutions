#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Max heap (default priority_queue)
    priority_queue<int> max_heap;
    
    // Min heap using greater
    priority_queue<int, vector<int>, greater<int>> min_heap;
    
    // Insert elements
    max_heap.push(5);
    max_heap.push(2);
    max_heap.push(8);
    min_heap.push(5);
    min_heap.push(2);
    min_heap.push(8);
    
    // Display size
    cout << "Max heap size: " << max_heap.size() << endl;
    cout << "Min heap size: " << min_heap.size() << endl;
    
    // Extract and display top elements
    cout << "Max heap top (largest): " << max_heap.top() << endl;
    cout << "Min heap top (smallest): " << min_heap.top() << endl;
    
    // Remove top elements
    max_heap.pop();
    min_heap.pop();
    
    // Display new top elements
    cout << "Max heap top after pop: " << max_heap.top() << endl;
    cout << "Min heap top after pop: " << min_heap.top() << endl;
    
    return 0;
}