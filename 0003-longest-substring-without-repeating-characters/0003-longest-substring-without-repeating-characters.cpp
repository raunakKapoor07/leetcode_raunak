class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int l=0;
        int r=0;
        int curlen=0;
        int maxlen=0;
        vector<int> hash(256,0);
        while(r<n){
            hash[(int)(s[r])]++;
            if(hash[(int)(s[r])]>1){
            while(s[l]!=s[r]){
                hash[(int)(s[l])]--;
                l++;
            }
            hash[(int)(s[l])]--;
            l++;
            }
            curlen=r-l+1;
            maxlen=max(maxlen,curlen);
            r++;
        }       
        return maxlen; 
    }
};