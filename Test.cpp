#include<iostream>
#include<vector>
#include<climits>

using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
        string stack;
        for (char c : s) {
            stack.push_back(c);
            if (stack.size() >= part.size() && 
                stack.substr(stack.size() - part.size()) == part) {
                stack.erase(stack.end() - part.size(), stack.end());
            }
        }
        return stack;
    }
};