class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> arr;
        for (int i=0; i<nums.size(); i++){
            arr.insert(nums[i]);
        }
        int k=0;
        for (int x: arr){
            nums[k]=x;
            k++;
        }
        return k;
        
    }
};