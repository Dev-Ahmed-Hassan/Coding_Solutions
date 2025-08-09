#include <vector>
#include <limits.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentMax=INT_MIN;int sum=0;
        for(int x: nums)
        {
            if(sum+x < 0)
            {
                sum = 0;
                currentMax = max(currentMax, x);
            }
            else
            {
                sum += x;
                currentMax = max(currentMax, sum); 
            }
        }
        return currentMax;
    }
};