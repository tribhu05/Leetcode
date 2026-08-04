class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int n = grid.size();

        vector<int> count(n * n + 1, 0);

        // Count frequency of each number
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                count[grid[i][j]]++;
            }
        }

        int repeated, missing;

        // Find repeated and missing numbers
        for (int i = 1; i <= n * n; i++) {
            if (count[i] == 2)
                repeated = i;

            if (count[i] == 0)
                missing = i;
        }

        return {repeated, missing};
    }
};