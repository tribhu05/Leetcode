class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merge;
        for (int i=0; i<m; i++){
            merge.push_back(nums1[i]);
        }
        for (int i=0; i<n; i++){
            merge.push_back(nums2[i]);
        }
        sort(merge.begin(), merge.end());
        for(int i = 0; i < merge.size(); i++) {
            nums1[i] = merge[i];
        }
        
    }

};