class Solution {
public:
    int maxVowels(string s, int k) {
        int vwl = 0;
        int final = 0;

        for (int i = 0; i < k; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u') {
                vwl++;
            }
        }

        final = vwl;

        for (int i = k; i < s.size(); i++) {

            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u') {
                vwl++;
            }

            if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' ||
                s[i - k] == 'o' || s[i - k] == 'u') {
                vwl--;
            }

            final = max(final, vwl);
        }

        return final;
    }
};