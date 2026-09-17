class Solution {
public:
    bool canJump(vector<int>& nums) {
       int n=nums.size();
       if(n==1){
        return true;
       }
       int jump=nums[0];
       for(int i=0;i<n;i++){
        int temp=jump;
        jump=max(jump,nums[i]);
        if(jump<=0 && i!=n-1){
            return false;
        }
        jump--;
       } 
       return true;        
    }
};