class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low <= high) {

            int i = low + (high - low) / 2;

            long long hr = 0;

            for (int a : piles) {
                hr += (a + i - 1) / i;
            }

            if (hr <= h) {
                high = i - 1;
            }
            else {
                low = i + 1;
            }
        }

        return low;
    }
};