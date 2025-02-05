class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        for(int i=0;i<32;i++){
          int temp=n>>i;
          int a=temp&1;
          if(a==1){
            count++;
          }
        }
        return count;
    }
};