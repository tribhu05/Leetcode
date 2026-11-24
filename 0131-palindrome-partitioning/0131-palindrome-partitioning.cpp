
class Solution {
public:
    vector<vector<string>> ans;

    void solve(string s, int start, vector<string> path) {
        if (start == s.size()) {
            ans.push_back(path);
            return;
        }

        for (int i = start; i < s.size(); i++) {
            string sub = s.substr(start, i - start + 1);
            string rev = sub;
            reverse(rev.begin(), rev.end());

            if (sub == rev) {
                path.push_back(sub);
                solve(s, i + 1, path);
                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        solve(s, 0, {});
        return ans;
    }
};
