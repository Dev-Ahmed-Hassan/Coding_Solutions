// kinda brute force approach but works!

class Solution {
public:
    int maxSum(vector<int>& nums) {
        int maxSum = -1;
        
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (findMaxDigit(nums[i]) == findMaxDigit(nums[j])) {
                    int currentSum = nums[i] + nums[j];
                    if (currentSum > maxSum) {
                        maxSum = currentSum;
                    }
                }
            }
        }
        
        return maxSum;
    }

    int findMaxDigit(int x) {
        int maxDigit = 0;
        while (x > 0) {
            int digit = x % 10;
            if (digit > maxDigit) {
                maxDigit = digit;
            }
            x /= 10;
        }
        return maxDigit;
    }
};