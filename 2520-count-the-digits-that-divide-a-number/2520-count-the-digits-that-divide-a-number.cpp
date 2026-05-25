class Solution {
public:
    int countDigits(int num) {
        int original = num; // Save a copy of the original number (e.g., 121)
        int cnt = 0;
        
        while (num > 0) {
            int ls = num % 10; // Extract the last digit
            
            // ONLY count it if the original number is perfectly divisible by this digit
            if (original % ls == 0) {
                cnt = cnt + 1;
            }
            
            num = num / 10; // Move to the next digit
        }
        
        return cnt;
    }
};