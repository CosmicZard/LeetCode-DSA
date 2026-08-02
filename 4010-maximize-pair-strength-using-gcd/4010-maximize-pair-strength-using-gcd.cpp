class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        
     long long maxi = 0;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                long long g = std::gcd(nums[i], nums[j]);
                long long strength = (1LL * nums[i] * nums[j]) / (g * g);
                maxi = std::max(maxi, strength);
            }
        }

        return maxi;
    }
};