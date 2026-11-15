class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1;
        if (x == 1) return 1;
        if (x == -1) return (n % 2 == 0) ? 1 : -1;

        long double ans = 1;
        long double base = x;
        long long N = n;
        if (N < 0) {
            base = 1 / base;
            N = -N;
        }
        while (N > 0) {
            if (N % 2 == 1) ans *= base;
            base *= base;
            N /= 2;
        }
        return (double)ans;
    }
};