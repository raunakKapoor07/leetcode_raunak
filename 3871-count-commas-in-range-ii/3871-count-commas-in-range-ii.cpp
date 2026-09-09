class Solution {
public:
    long long countCommas(long long n) {
     if(n<=999){
        return 0;
     }
     long long ans=0; 
     if(n<=(long long)1e6-1LL){
        ans=n-999;
        return ans;
     }  
     if(n<=(long long)1e9-1LL){
        ans=n-999+n-((long long)1e6-1LL);
        return ans;
     }
     if(n<=(long long)1e12-1LL){
        ans=n-999LL+n-((long long)1e6-1)+n-((long long)1e9-1LL);
        return ans;
     }
     if(n<=(long long)1e15-1LL) return n-999LL+n-((long long)1e6-1LL)+n-((long long)1e9-1LL)+n-((long long)1e12-1LL);

     return n-999LL+n-((long long)1e6-1LL)+n-((long long)1e9-1LL)+n-((long long)1e12-1LL)+1;


    }
};