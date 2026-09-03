class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        if (nums1.size()==1){
                return true;
        }
        bool odd =false;
        bool even= false;

        for (int i=0 ; i<nums1.size(); i++){
            if(nums1[i]%2 ==0){
                even =true;

            }
            else{
                odd= true;
            }
            

        }
        return true;
        
    }
};