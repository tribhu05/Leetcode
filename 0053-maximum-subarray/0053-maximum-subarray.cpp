class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=0, max_sum= INT_MIN;
        for (int i : nums){
            currsum+= i;
            max_sum=max(currsum, max_sum);

            if (currsum<0){
                currsum=0;
            }
            
        }
        return max_sum;

        
    }
};