class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> result(m,-1);
        vector<int> ans;
        stack<int> st;
        for(int i=0;i<m;i++){
            while(!st.empty() && nums2[i]>nums2[st.top()]){
                int index=st.top();
                st.pop();
                result[index]=nums2[i];
            }
            st.push(i);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    ans.push_back(result[j]);
                }
            }
        }
        return ans;
    }
};