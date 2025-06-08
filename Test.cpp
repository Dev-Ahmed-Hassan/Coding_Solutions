#include <iostream>
#include <vector>
using namespace std;





int main()
{
    vector<int> nums = {1,7,3,6,5,6};
    
        int total=0;
        int i=0;
        int j=0;
        int sum = 0;
        vector<int> arr;
        
        for(int x: nums)
        {
            sum+=x;
        }

        for(int x: nums)
        {
            arr.push_back(sum - x);
        }
        
        int ptr1=0, ptr2 =0, hsum = 0;

        

        while(ptr1 < arr.size() )
        {
            if(ptr2 < ptr1)
            {
                hsum+=nums[ptr2];
                ptr2++;
            }
            else
            {
                if(arr[ptr1]/2 == hsum)
                {
                    return ptr1;
                }
                else
                {
                    ptr1++;
                }
            }
        }
    
}