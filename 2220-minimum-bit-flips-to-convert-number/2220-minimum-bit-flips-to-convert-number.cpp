class Solution {
public:
    int minBitFlips(int start, int goal) {
        long long xrr=start^goal;
        int ans=0;
        while(xrr>0){
            if(xrr%2!=0){
                ans++;
            }
            xrr=xrr>>1;
        }
        return ans;
    }
};