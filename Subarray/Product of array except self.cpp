class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());

        vector<int> pref(nums.size(),1);
        vector<int> suf(nums.size(),1);

        // int pref=,suf=1;
        // pref[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            pref[i]=pref[i-1]*nums[i-1];
        }
        // suf[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--)
        {
            suf[i]=suf[i+1]*nums[i+1];
        }
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=pref[i]*suf[i];
        }
        return ans;
    }
};
