class Solution {
public:
    unordered_map<int, vector<int>> memo; 

    vector<int> constructBeautifulArray(int N) {
        if (memo.count(N)) return memo[N]; 

        vector<int> result;
        if (N == 1) {
            result = {1}; 
        } else {
            vector<int> oddPart = constructBeautifulArray((N + 1) / 2);
            for (int num : oddPart) {
                result.push_back(2 * num - 1);
            }
            vector<int> evenPart = constructBeautifulArray(N / 2);
            for (int num : evenPart) {
                result.push_back(2 * num);
            }
        }

        memo[N] = result; 
        return result;
    }

    vector<int> beautifulArray(int N) {
        return constructBeautifulArray(N);
    }
};