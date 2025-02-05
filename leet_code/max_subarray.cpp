class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0];
        int max=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            sum+=nums[i];
           if(sum<nums[i]){
            sum=nums[i];
           }
           if(sum>max){
            max=sum;
           }
        }
        return max;
    }
};