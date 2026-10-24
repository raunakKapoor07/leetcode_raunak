class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxlen=0;
        int len=0;
        int l=0,r=0;
        int n=fruits.size();
        int first=-1;
        int second=-1;
        int firstcount=0;
        int secondcount=0;
        while(r<n){
            if((fruits[r]!=first && fruits[r]!=second) && (second!=-1 && first!=-1)){
                while(firstcount!=0 && secondcount!=0){
                    if(fruits[l]==first){
                        firstcount--;
                        l++;
                    }
                    else{
                        secondcount--;
                        l++;
                    }
                }
            }
            if(firstcount==0 && fruits[r]!=second){
                first=fruits[r];
            }
            else if(secondcount==0 && fruits[r]!=first){
                second=fruits[r];
            }
            if(fruits[r]==first){
                firstcount++;
            }
            else if(fruits[r]==second){
                secondcount++;
            }
                len=r-l+1;
                maxlen=max(maxlen,r-l+1);
                r++;
        }
        return maxlen;
    }
};