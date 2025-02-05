class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ans;
        vector<int> re;
        int n=nums.size(),max=0;
        for(int i=0;i<n;i++){
           ans[nums[i]]++;
        }
        int index=0;
        while(k){
            for(auto pair:ans){
                if(pair.second>max){
                    max=pair.second;
                    index=pair.first;
                }
            }
            re.push_back(index);
            ans.erase(index);
            k--;
            max=0;
        }
        return re;
    }
};