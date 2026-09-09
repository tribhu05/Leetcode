class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k;
        k = nums.size();
        int i = 0;
        while (i < k) {
            if (nums[i] == val) {
                nums.erase(nums.begin() + i);
                k--;
            }
            else if (nums[i] != val)
                i++;
        }
        return k;
    }
};