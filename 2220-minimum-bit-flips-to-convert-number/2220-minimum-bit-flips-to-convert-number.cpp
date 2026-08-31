class Solution {
public:
    int minBitFlips(long long start, long long goal) {
        vector<int> binst(32,0);
        vector<int>bingl(32,0);
        long long temp1=start;
        long long temp2=goal;
        int i=1;
        while(temp1>0){
            binst[32-i]=temp1%2;
            temp1/=2;
            i++;
        }
        i=1;
        while(temp2>0){
            bingl[32-i]=temp2%2;
            temp2/=2;
            i++;
        }
        int ans=0;
        for(i=0;i<32;i++){
            if(binst[i]!=bingl[i]){
                ans++;
            }
        }
        return ans;
    }
};