class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i=0; i<=nums.size()-2; i++){
            if(i>0 && nums[i] == nums[i-1])
                continue;
            int lft=i+1;
            int rht=nums.size()-1;
            while (lft < rht){
                int sum =nums[i]+nums[lft]+nums[rht];
                if(sum<0){
                    lft++;
                }
                else if(sum>0){
                    rht--;
                }
                else{
                    ans.push_back({nums[i], nums[lft],nums[rht]});
                    lft++;
                    rht--;
                    while (lft<rht && nums[lft]==nums[lft-1])
                        lft++;
                    while (lft<rht && nums[rht]==nums[rht +1])
                        rht--;
                }

            }
            
        }
        return ans;


        
        
    }
};