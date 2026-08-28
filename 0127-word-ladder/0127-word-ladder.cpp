class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {

        unordered_set<string> words(wordList.begin(), wordList.end());

        // If endWord is not present, transformation is impossible
        if (words.find(endWord) == words.end()) {
            return 0;
        }

        queue<string> q;
        q.push(beginWord);

        int steps = 1;

        while (!q.empty()) {

            int size = q.size();

            for (int i = 0; i < size; i++) {

                string word = q.front();
                q.pop();

                // Try changing every character
                for (int j = 0; j < word.length(); j++) {

                    char original = word[j];

                    for (char c = 'a'; c <= 'z'; c++) {

                        word[j] = c;

                        // We found the end word
                        if (word == endWord) {
                            return steps + 1;
                        }

                        // If this is a valid unused word
                        if (words.find(word) != words.end()) {
                            q.push(word);
                            words.erase(word);
                        }
                    }

                    // Restore original character
                    word[j] = original;
                }
            }

            steps++;
        }

        return 0;
    }
};