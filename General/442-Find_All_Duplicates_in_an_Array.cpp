// same thing as Problem 287
// sort... find duplicate... add it to the vector... return vector
// not good for time complexity... but anyways it works!

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> temp;

        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                temp.emplace_back(nums[i]);
                i++;
            }
        }
        return temp;
    }
};