class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n= nums.size();
        int min=0;
        int max=0;
        for(int i=0;i<n; i++){
            if(nums[i]<nums[min]){
                min=i;
            }
            else if(nums[i]>nums[max]){
                max=i;
            }
        }
        if (min>max){
            swap(min,max);
        }
        int lft=max+1;
        int rht=n-min;
        int both=((min+1)+(n-max));
        return std::min({lft,rht,both});
    }
};