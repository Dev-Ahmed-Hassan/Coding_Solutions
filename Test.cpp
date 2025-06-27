// got this like crazy..... 
#include <iostream>
#include<iomanip>
using namespace std;
int findCookTime (int rank, int dishes)
{
    int time=0; 
    for(int i=1; i<= dishes; i++)
    {
        time+= i*rank;
    }
    return time;
}



int main() {
    cout << findCookTime(1, 11);
}