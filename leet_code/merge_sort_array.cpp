class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index=0;
        for(int i=m;i<n+m;i++){
            nums1[i]=nums2[index];
            index++;
        }
        return sort(nums1.begin(),nums1.end());
    }
};