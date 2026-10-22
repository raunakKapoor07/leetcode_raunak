class Solution {
public:
    int minOperations(vector<int>& nums) {
        bool isdec=true;
        bool isinc=true;
        int n=nums.size();
        if(n==1){
            return 0;
        }
        int k=-1;
        for(int i=0;i<n;i++){
            if(nums[(i+1)%n]!= (nums[i]+1)%n){
                isinc=false;
            }
            if(nums[(i+1)%n] != (nums[i]+n-1)%n){
                isdec=false;
            }
            if(nums[i]==0){
                k=i;
            }
        }
        if(!isdec && !isinc){
            return -1;
        }
        int ans=INT_MAX;
        if(isinc){
            ans=min({ans,k,n-k+2});
        }
        if(isdec){
            ans=min({ans,((k+1)%n)+1,((n-k-1)%n)+1});
        }
        return ans;
    }
};