
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int k = nums[0];
        int ans = INT_MAX;

        // Check normal order
        bool ok = true;

        for (int i = 0; i < n; i++) {
            if (nums[i] != (k + i) % n) {
                ok = false;
                break;
            }
        }

        if (ok) {
            if (k == 0) ans = 0;
            else ans = min(n - k, k + 2);
        }

        // Check reversed order
        ok = true;

        for (int i = 0; i < n; i++) {
            if (nums[i] != (k - i + n) % n) {
                ok = false;
                break;
            }
        }

        if (ok) {
            int r = (n - 1 - k + n) % n;
            ans = min(ans, 1 + min(r, n - r));
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
