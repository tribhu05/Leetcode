class Solution {
public:
    int divide(int dividend, int divisor) {

        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long a = dividend;
        long long b = divisor;

        bool negative = false;

        if (a < 0) {
            a = -a;
            negative = !negative;
        }

        if (b < 0) {
            b = -b;
            negative = !negative;
        }

        long long ans = 0;

        while (a >= b) {

            long long temp = b;
            long long count = 1;

            while (a >= temp + temp) {
                temp += temp;
                count += count;
            }

            a -= temp;
            ans += count;
        }

        if (negative)
            ans = -ans;

        return ans;
    }
};