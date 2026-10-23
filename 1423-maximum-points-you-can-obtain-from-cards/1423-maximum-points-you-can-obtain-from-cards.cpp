class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int currscore=0;
        int maxx=0;
        int n=nums.size();
        int l=0;
        int r=k;
        for(int i=l;i<k;i++){
            currscore+=nums[i];
        }
        maxx=currscore;
        int j=k-1;
        for(int i=n-1;i>n-k-1;i--){
            currscore-=nums[j];
            j--;
            currscore+=nums[i];
            maxx=max(maxx,currscore);
        }
        return maxx;
    }
};