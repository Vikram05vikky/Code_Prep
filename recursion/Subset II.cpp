class Solution {
public:
    void sol(vector<int> &nums,int ind,vector<int> &temp,vector<vector<int>> &ans)
    {
        // if(ind == nums.size())
        // {
            ans.push_back(temp);

        // sol(nums,ind+1,temp,ans);
        for(int i=ind;i<nums.size();i++)
        {
            if(i!=ind && nums[i] == nums[i-1])
                continue;
            temp.push_back(nums[i]);
            sol(nums,i+1,temp,ans);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        sol(nums,0,temp,ans);
        return ans;
    }
};
