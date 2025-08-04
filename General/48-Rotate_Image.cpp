#include <vector>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        for (int i = 0; i < row; i++) {
            for (int j = i + 1; j < row;
                 j++) { // Start from i+1 to avoid double swapping
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0; i<row; i++)
        {
            int count = 0 ;
            int j=row-1;
            while(count <= j)
            {
                swap(matrix[i][count],matrix[i][j]);
                count++; j--;
            }
        }
    }
    };