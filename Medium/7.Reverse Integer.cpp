class Solution {
public:
    int reverse(int x) {
        int lastDigit = 0;
        int revNum = 0;
        while (x != 0) {
            lastDigit = x % 10;
            x = x / 10;
            if (revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && lastDigit > 7))
                return 0;

            if (revNum < INT_MIN / 10 || (revNum == INT_MIN / 10&& lastDigit < -8))
                return 0;
            revNum = (revNum * 10) + lastDigit;
        }
        return revNum;
    }
};