class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
     int count0=0;
     int n=nums.size();
     int len=0;
     int maxlen=0;
     int l=0,r=0;
     while(r<n){
        if(nums[r]==0){
            count0++;
        }
        while(count0>k){
            if(nums[l]==0){
                count0--;
            }
            l++;
        }
        len=r-l+1;
        maxlen=max(maxlen,len);
        r++;
     }   
     return maxlen;
    }
};