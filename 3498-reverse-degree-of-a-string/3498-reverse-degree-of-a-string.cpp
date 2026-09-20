class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        
        for (int i=0;i<s.size(); i++){
            int value= 123 - s[i];
            int ans= value*(i+1);
            sum=sum+ans;
        }
        return sum;
        
    }
};