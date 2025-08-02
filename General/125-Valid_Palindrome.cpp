#include<iostream>
#include<vector>
#include<climits>

using namespace std;
// use this one... others were written by someone drunk
class Solution {
public:
    static bool valid(char ch) {
        return (ch >= 'a' && ch <= 'z') || 
               (ch >= 'A' && ch <= 'Z') || 
               (ch >= '0' && ch <= '9');
    }

    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;

        while (i < j) {
            if(valid(s[i]) && valid (s[j]))
            {
                if(tolower(s[i]) != tolower(s[j])) return false;
                i++;
                j--;
            }
            else if(valid(s[i]) && !valid (s[j])){
                j--;
            }
            else if(!valid(s[i]) && valid (s[j])){
                i++;
            }
            else
            {
                i++;
                j--;
            }
        }
        return true;        
    }
};







class Solution {
private:

    

    // Check if the character is alphanumeric
    bool valid(char ch) {
        return (ch >= 'a' && ch <= 'z') || 
               (ch >= 'A' && ch <= 'Z') || 
               (ch >= '0' && ch <= '9');
    }

    // Convert character to lowercase
    char toLower(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }
        return ch;
    }

    // Check if a string is a palindrome
    bool checkPalindrome(string a) {
        int s = 0;
        int e = a.length() - 1;

        while (s <= e) {
            if (a[s] != a[e]) {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
        string temp = "";

        // Remove non-alphanumeric characters and build lowercase string
        for (int j = 0; j < s.length(); j++) {
            if (valid(s[j])) {
                temp.push_back(toLower(s[j]));
            }
        }

        return checkPalindrome(temp);
    }
};


// Another I found

#include <cctype> // for isalnum, tolower

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            // Skip non-alphanumeric characters from the left
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            // Skip non-alphanumeric characters from the right
            while (left < right && !isalnum(s[right])) {
                right--;
            }
            // Compare characters (case-insensitive)
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};