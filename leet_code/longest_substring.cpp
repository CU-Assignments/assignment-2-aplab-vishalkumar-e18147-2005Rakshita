class Solution {
public:
    bool isNice(const string& s) {
        unordered_set<char> charSet(s.begin(), s.end());

        for (char c : s) {
            if (charSet.count(tolower(c)) == 0 || charSet.count(toupper(c)) == 0) {
                return false;
            }
        }
        return true;
    }

    string longestNiceSubstring(string s) {
        int n = s.length();
        string longest = "";
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                string sub = s.substr(i, j - i + 1);
                if (isNice(sub) && sub.length() > longest.length()) {
                    longest = sub;
                }
            }
        }
        return longest;
    }
};