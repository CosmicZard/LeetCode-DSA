class Solution {
public:
    bool isPalindrome(int x) {
        long long original = x;
        long long reversedNum = 0;

        // Mathematically reverse the number
        while (x > 0) {
            int digit = x % 10;
            reversedNum = reversedNum * 10 + digit;
            x /= 10;
        }

        // Check if the reversed number matches the original
        return original == reversedNum;
    }  
};