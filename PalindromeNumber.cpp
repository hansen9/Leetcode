class Solution {
public:
    bool isPalindrome(int x) {

        // //negative can't be palindrome
        // if (x<0)
        //     return false;

        // //divisible by 10 and 0 is not palindrome
        // if(x != 0 && x%10 == 0)
        //     return false;
        
        // int reverse = 0;

        // while (x > reverse)
        // {
        //     //accumulate digits from the end of the number x and keep pushing to reverse var
        //     reverse = reverse*10 + x%10;

        //     x = x/10;


        // }

        // //check for the even length number
        // if(x == reverse)
        //     return true;

        // //check for odd length number
        // if (x == reverse/10)
        //     return true;

        // //else is not palindrome
        // return false;

        unsigned int temp, reverse = 0;
        temp = x;
        while (temp > 0)
        {
            int last = temp % 10;
            reverse = reverse * 10 + last;
            temp = temp / 10;
        }
        return reverse == x;
        
        
    }
};