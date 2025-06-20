// Common mistakes: ignoring integer overflow 

class Solution {
public:
    int mySqrt(int x) {
        if (x==0) return 0;
        if(x==1) return 1;

        int s=0, e=x, m=s+(e-s)/2;

        while(s<=e)
        {
            if(m == x/m) return m;
            else if(m < x/m && (m+1) > x/(m+1))
            {
                return m;
            }
            else if(m < x/m) 
            {
                s = m+1;
                m=s+(e-s)/2;
            }
            else if(m > x/m)
            {
                e = m-1;
                m = s+(e-s)/2;
            }
        }
        return -1;
    }
};