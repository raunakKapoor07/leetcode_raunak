class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==1){
            return 0;
        }
        if(n==2){
            return abs(nums[0]-nums[1]);
        }
        int max=nums[n-1];
        int count=0;
        for(int i=0;i<n;i++){
            count+=max-nums[i];
        }
        return count;
    }
};