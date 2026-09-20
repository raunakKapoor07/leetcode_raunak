class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            int temp=((int)'z'+1)-(int)s[i];
            count+=temp*(i+1);
        }
        return count;
    }
};