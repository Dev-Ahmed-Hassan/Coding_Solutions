#include <vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> right(nums.size(), 1);
        int product = 1;
        for(int i=0; i< nums.size()-1; i++)
        {
            product = nums[i] * product;
            right[i+1] = product;
        }
        product = 1;
        for(int j=nums.size()-2; j>=0; j--)
        {
            product = nums[j+1] * product;
            right[j]*= product;
        }
        return right;
    }
};