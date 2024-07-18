class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>mp;
        vector<int>ans;
        int n=nums2.size();
        st.push(nums2[n-1]);
        mp[nums2[n-1]]=-1;
        for(int i=nums2.size()-2;i>=0;i--){

            while(st.size()>0 && st.top()<nums2[i]){
                st.pop();

            }
            if(st.size()==0)
            mp[nums2[i]]=-1;
            else
            mp[nums2[i]]=st.top();

            
            st.push(nums2[i]);
        }
       for(int i=0;i<nums1.size();i++){
        if(mp.find(nums1[i])!=mp.end())
          ans.push_back(mp[nums1[i]]);
       }
       return ans;
    }
};