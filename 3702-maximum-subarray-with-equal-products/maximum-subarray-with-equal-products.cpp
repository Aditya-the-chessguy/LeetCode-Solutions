class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;

        for (int i = 0; i < n; i++) {
            long long g = nums[i];
            long long l = nums[i];
            long long prod = nums[i];

            for (int j = i + 1; j < n; j++) {
                if (prod > 1e12) break;

                prod *= nums[j];
                g = std::gcd(g, (long long)nums[j]);
                l = std::lcm(l, (long long)nums[j]);

                if (l > 1e12) break;

                if (prod == g * l) {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};