// or u can do it by sort(arr.begin(), arr.end()) and running a reverse for loop for the first element that is different from last element.

#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    if (arr.empty()) {return -1;}
    int Largest = arr[0], secondLargest=INT_MIN;

    for(int x: arr)
    {
        if(x > Largest)
        {
            secondLargest = Largest;
            Largest = x;
        }
        else if(x!= Largest && x > secondLargest )
        {
            secondLargest = x;
        }
    }
    if(secondLargest == INT_MIN)
    {return -1;}
    return secondLargest;
}