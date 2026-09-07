class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        int max_val=floor(pow(r,1.0/k)+1e-9);
        int min_val=ceil(pow(l,1.0/k)-1e-9);        
        if (max_val>=min_val) {
            return max_val-min_val+1;
        }
        return 0;
    }
};