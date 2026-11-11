class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long onlySingle = 1LL * need1 * cost1 + 1LL * need2 * cost2;

        long long onlyBoth = 1LL * max(need1, need2) * costBoth;

        long long pairs = min(need1, need2);
        long long rem1 = need1 - pairs;
        long long rem2 = need2 - pairs;
        long long mixed = 1LL * pairs * costBoth + 1LL * rem1 * cost1 + 1LL * rem2 * cost2;

        return min({onlySingle, onlyBoth, mixed});
    }
};