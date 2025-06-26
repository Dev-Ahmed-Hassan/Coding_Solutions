// got this like crazy..... 
#include <iostream>
#include<iomanip>
using namespace std;
float morePrecision(int n, int precision, int tempSol) {
    double factor = 1;
    double ans = tempSol;

    for(int i = 0; i < precision; i++) {
        factor = factor / 10;

        for(double j = ans; j * j < n; j = j + factor) {
            ans = j;
        }
    }

    return ans;
}

float mySqrt(int x) {
    if (x == 0) return 0;
    if (x == 1) return 1;

    int s = 0, e = x, m = s + (e - s) / 2;

    while (s <= e) {
        if (m == x / m) return m;
        else if (m < x / m && (m + 1) > x / (m + 1)) {
            return morePrecision(x, 3,m);
        }
        else if (m < x / m) {
            s = m + 1;
            m = s + (e - s) / 2;
        }
        else if (m > x / m) {
            e = m - 1;
            m = s + (e - s) / 2;
        }
    }
    return -1;
}



int main() {
    cout << fixed << setprecision(4);  // Show 4 decimal places
    cout << mySqrt(1111);  // Output: 33.3316
}