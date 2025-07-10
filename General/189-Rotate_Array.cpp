#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.empty()) return;
        k = k % nums.size();  // Handle cases where k > nums.size()
        if (k == 0) return; 
        std::rotate(nums.begin(), nums.end() - k, nums.end());
    }

    void rotate(vector<int>& nums, int k) {
        if (nums.empty()) return;
        k = k % nums.size();
        if (k == 0) return;
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};