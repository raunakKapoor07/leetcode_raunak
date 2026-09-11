class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
      long long xrr=0;
      int n=nums.size();
      for(int i=0;i<n;i++){
        xrr=xrr^nums[i];
      }  
      int rightmost=(xrr & (xrr-1)) ^ xrr;
      long long xrr1=0;
      long long xrr2=0;
      for(int i=0;i<n;i++){
        if(nums[i]&rightmost){
            xrr1=xrr1^nums[i];
        }
        else{
            xrr2=xrr2^nums[i];
        }
      }
      return{(int)xrr1,(int)xrr2};
    }
};