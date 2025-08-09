#include <vector>
#include <limits.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_buy = INT_MAX;
        int profit = 0;

        for(int x: prices)
        {
            if(x < min_buy)
            {
                min_buy = x;
            }
            if(x - min_buy > profit)
            {
                profit = x - min_buy;
            }
        }
        return profit;
        
    }
};