 #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> findArraySum(vector<int>&a, vector<int>&b) {
	int sum = 0;
	int multiplier = 1;
	for(int i=a.size()-1; i>=0; i--)
	{
		sum+=multiplier*a[i];
		multiplier*=10;
	}
	multiplier = 1;
	for(int i=b.size()-1; i>=0; i--)
	{
		sum+=multiplier*b[i];
		multiplier*=10;
	}

	vector<int> result;

	while(sum >0)
	{
		result.push_back(sum%10);
		sum /= 10;
	}

	reverse(result.begin(), result.end());
	return result;
}

	int main()
	{
		vector<int> m = {1, 3, 2, 4};
		vector<int> n = {1};

		vector<int> res =  findArraySum(m,n);

		for(int x: res)
		{
			cout << x << " " ;
		}
	}