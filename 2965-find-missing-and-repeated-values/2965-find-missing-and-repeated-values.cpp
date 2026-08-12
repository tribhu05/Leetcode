class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int n = grid.size();
        set<int> s;
        int repeated;
        for (auto row : grid) {
            for (int num : row) {
                
                if (s.count(num)) {
                    repeated = num;
                }
                s.insert(num);
            }
        }
        int missing;
        for (int i = 1; i <= n * n; i++) {
            if (!s.count(i)) {
                missing = i;
            }
        }
        return {repeated, missing};
    }
};