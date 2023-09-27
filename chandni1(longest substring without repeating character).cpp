class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            unordered_set<char> charSet;
            for (int j = i; j < n; j++) {
                int curr = j - i + 1;
                charSet.insert(s[j]);
                if (charSet.size() == curr) {
                    count = max(count, curr);
                } else {
                    charSet.erase(s[i]);
                    break;
                }
            }
        }
        return count;
    }
};

