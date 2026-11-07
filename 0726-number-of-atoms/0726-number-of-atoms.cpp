
class Solution {
public:
    string countOfAtoms(string formula) {
        stack<map<string, int>> st;
        st.push({});

        int n = formula.size();
        int i = 0;

        while (i < n) {

            if (formula[i] == '(') {
                st.push({});
                i++;
            }

            else if (formula[i] == ')') {
                map<string, int> group = st.top();
                st.pop();
                i++;

                int multiplier = 0;

                while (i < n && isdigit(formula[i])) {
                    multiplier = multiplier * 10 + (formula[i] - '0');
                    i++;
                }

                if (multiplier == 0)
                    multiplier = 1;

                for (auto& p : group) {
                    st.top()[p.first] += p.second * multiplier;
                }
            }

            else {
                string atom;
                atom += formula[i++];

                while (i < n && islower(formula[i])) {
                    atom += formula[i++];
                }

                int count = 0;

                while (i < n && isdigit(formula[i])) {
                    count = count * 10 + (formula[i] - '0');
                    i++;
                }

                if (count == 0)
                    count = 1;

                st.top()[atom] += count;
            }
        }

        string result;

        for (auto& p : st.top()) {
            result += p.first;

            if (p.second > 1) {
                result += to_string(p.second);
            }
        }

        return result;
    }
};
