class Solution {
public:
    int rob(vector<int>& nums) {
        int mx = 0;

        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;

            for (int j = i; j < nums.size(); j += 2) {
                sum += nums[j];
            }

            mx = max(mx, sum);
        }

        return mx;
    }
};