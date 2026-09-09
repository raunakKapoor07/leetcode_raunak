class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        unordered_map<char,long long> mpp;
        int n=nums.size();
        vector<string> ans;
        int num=1;
        for(int i=0;i<26;i++){
            mpp[char(97+i)]=num;
            num*=2;
        }
        for(int j=0;j<n;j++){
            string a="";
            if(nums[j]>=num*2){
                ans.push_back("zz");
                continue;
            }
            int temp=nums[j];
                for(int i=0;i<26;i++){
                    if(temp==0){
                        ans.push_back(a);
                        break;
                    }
                   if(temp==1){
                    a+='a';
                    temp--;
                    continue;
                   }
                    if(i<25 && mpp[char(97+i+1)]>temp && mpp[char(97+i)]<=temp){
                        temp-=mpp[char(97+i)];
                        a+=char(97+i);
                        i=-1;
                        continue;
                    } 
                    else if(i==25){
                        temp-=mpp['z'];
                        i=-1;
                        a+='z';
                    }
                }
            }
        return ans;
    }
};