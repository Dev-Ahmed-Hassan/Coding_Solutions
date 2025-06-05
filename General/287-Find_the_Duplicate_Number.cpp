// My Approach:
// Just sort -> find the duplicate -> return it
// Not good for time complexity.
// Teacher also explained another method... but that is not for this question.
// Their question assumed that the question puts a constraint that only one number duplicates in the array and the numbers are in range [1,n-1] with n elements. 
// But this question gives a test case [3,3,3,3,3]
// Teacher's approach was to XOR all the elements of the given array that gives 3 in this case, then XOR it with number from [1,n-1] giving the duplicating term. But in this case, 4 is missing from the initial array breaking the assumed constraint.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                return nums[i];
            }
        }
        return 0;
    }
};