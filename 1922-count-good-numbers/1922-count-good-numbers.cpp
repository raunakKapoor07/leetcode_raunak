class Solution {
    const int MOD = 1e9 + 7;
    long long mypow(long long x,long long anss){
        long long temp=x;
        if(temp==0){
            return 1; 
        }
        if(temp%2==0){
            return mypow(x/2,(anss*anss)%MOD);
        }
        else{
            return (anss* mypow(x-1,anss))%MOD;
        }
    }
public:
    int countGoodNumbers(long long n) {
        long long x;
        long long y;
        long long ans=0;
        if(n%2==0){
            x=n/2;
            y=n/2;
        }
        else{
            x=n/2+1;
            y=n/2;
        }
        ans+=(mypow(x,5) * mypow(y,4))%MOD;
        return (int)ans;
    }
};