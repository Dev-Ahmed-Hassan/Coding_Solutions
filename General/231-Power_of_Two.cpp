// My Take
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;  // Handle 0 and negative numbers
        
        while (n > 1) {  // Stop when n reaches 1
            if (n % 3 != 0) {
                return false;
            }
            n = n / 3;
        }
        return true;  // If we get to 1, it's a power of two
    }
};

int main()
{
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;  // Handle 0 and negative numbers
        
        while (n > 1) {  // Stop when n reaches 1
            if (n % 3 != 0) {
                return false;
            }
            n = n / 3;
        }
        return true;  // If we get to 1, it's a power of two
    }

    cout << isPowerOfTwo(3);
}

// Bitwise

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};j
