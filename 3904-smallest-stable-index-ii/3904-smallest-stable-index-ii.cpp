class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> minn;
        vector<int>maxx;
        int n=nums.size();
        int j=0;
        minn.push_back(nums[n-1]);
        for(int i=n-2;i>=0;i--){
            minn.push_back(min(nums[i],minn[j]));
            j++;
        }
        reverse(minn.begin(),minn.end());
        for(int i=0;i<n;i++){
            if(i==0){
                maxx.push_back(nums[0]);
                continue;
            }
            if(i>0 &&nums[i]>=maxx[i-1]){
                maxx.push_back(nums[i]);
            }
            else if( i>0 && nums[i]<maxx[i-1]){
                maxx.push_back(maxx[i-1]);
            }
        }

        for(int i=0;i<n;i++){
            if(maxx[i]-minn[i]<=k){
                return i;
            }
        }
        return -1;
    }
};