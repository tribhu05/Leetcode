class Solution {
public:
    long long countNonDecreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans = 0;
        vector<pair<int, int>> st;
        long long cost = 0;
        int left = n - 1;

        for (int right = n - 1; right >= 0; right--) {
            int cnt = 1;

            while (!st.empty() && st.back().first < nums[right]) {
                cost += 1LL * (nums[right] - st.back().first) * st.back().second;
                cnt += st.back().second;
                st.pop_back();
            }

            st.push_back({nums[right], cnt});

            while (cost > k) {
                
                auto &p = st.front();
                cost -= p.first - nums[left];
                p.second--;
                if (p.second == 0) st.erase(st.begin());
                left--;
            }

            ans += left - right + 1;
        }

        return ans;
    }
};