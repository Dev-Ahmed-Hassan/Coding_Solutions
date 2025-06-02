// My method

class Solution {
public:
    int reverse(int x) {
        
        // converting the int to string
        string num = to_string(x);
        // reversed string
        string rev = "";
        // a flag for negative value
        bool neg = false;
        // our returning answer
        int ans;
        // iteration variable
        int i = 0;
        //negative condition
        if(num[0] == '-')
        {
            neg = true;
            i++;
        }

        // start of the loop
        for(; i<num.size(); i++)
        {
            rev = num[i] + rev;
        }

        // catching the error by try catch
        try
        {
            ans = stoi(rev);
        }
        catch(out_of_range& e)
        {
            return 0;
        }
        
        if (neg) ans = -ans;

        
        return ans; 

    }
};


// Problem in above approach is that it takes time complexity and also memory usage. 
// There is a simpler way for it.

// I got this solution after watching a tuitorial but I didn't copy paste it. 
// I also put my thinking in it.
class Solution {
public:
    int reverse(int x) {
        //will store our final ans
        int ans = 0;
        // will store our current digit
        int digit = 0;
        while(x != 0)
        {
            // mod 10 gives digit
            digit = x%10;
            // divide by 10 eleminates the last digit
            x = x/10;
            // check condition without letting ans exceed the 32 bits
            if(ans > (INT_MAX/10) || ans <(INT_MIN/10))
            return 0;
            // only add the number if it doesn't exceed the 32 bits
            ans = ans*10 + digit;
        }
            return ans;
    }
};