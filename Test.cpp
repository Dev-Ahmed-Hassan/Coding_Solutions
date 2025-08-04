#include<iostream>
#include<vector>
#include<climits>

using namespace std;
int canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size() < 3)
        {
            return false;
        }
        int count=0;
        for(int i=0; i<flowerbed.size()-2; i++)
        {
            if(flowerbed[i] == flowerbed[i+1] == flowerbed[i+2] == 0 )
            {
                count++;
                flowerbed[i+1] = 1;
            }
        }
        return count;
    }

int main()
{
    vector<int> flowerbed = {1,0,0,0,1};
    int n = 1;
    cout << canPlaceFlowers(flowerbed, n) << endl;
    
}