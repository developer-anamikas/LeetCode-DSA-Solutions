class Solution {
public:
    bool isPalindrome(int x) {
        long revNum = 0; 
        long ORIGINAL = x;
        if(x<0){
            return false;
        }
        while (x != 0) {
            int ld = x % 10;
            revNum = (revNum * 10) + ld;
            x = x / 10;
        }
        
        // 🌟 ADD THIS CHECK HERE: If it overflows the integer limits, return 0
        if (revNum > INT_MAX || revNum < INT_MIN) {
            return 0;
        }
        
        if(revNum == ORIGINAL){
            return true;
        }
        else{
            return false;
        }
    }
};