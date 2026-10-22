class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int pos=1;
        int prev=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==prev){
                continue;
            }
            else{
                prev=nums[i];
                swap(nums[i],nums[pos]);
                pos++;
            }
        }
        return pos;
    }
};