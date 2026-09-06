class Solution {
public:
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        int groups=1;
        int n=position.size();
        int t=0;
        for(int i=n-1;i>0;i--){
            int temp= groups;
            if(position[i]-position[i-1]<=distance){
            }
            else if(speed[i]>=speed[i-1]){
                groups++;
            }
            if(temp==groups){
                speed[i-1]=speed[i];
            }
            
        }
        return groups;
    }
};