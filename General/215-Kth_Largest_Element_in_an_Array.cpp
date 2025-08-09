#include <vector>
#include <algorithm>
using namespace std;

// Without Soritng;





// Using Sorting;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int current=nums[nums.size()-1]; int count = 0;
        for(int i= nums.size()-1; i>=0; i--)
        {
            if(current != nums[i])
            {
                current = nums[i];
            }
            count++;
            if(count == k)
            {return current;}
        }
        return -1;
    }
};