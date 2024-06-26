class Solution {
public:
    int mySqrt(int x) {
        int l = 0, r = x;
        while (l <= r)
        {
            long unsigned int mid = (l + r)/2;

            if (mid*mid == x)
            {
                return mid;
            }
            else if (mid*mid > x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return l - 1;
        
    }
};