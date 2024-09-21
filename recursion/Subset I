class Solution {
public:
    void sol(vector<int> &nums,int ind,vector<int> &temp,vector<vector<int>> &ans)
    {
        if(ind == nums.size())
        {
            ans.push_back(temp);
            return;
        }
        sol(nums,ind+1,temp,ans);
        temp.push_back(nums[ind]);
        sol(nums,ind+1,temp,ans);
        temp.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> temp;
    vector<vector<int>> ans;

    sol(nums,0,temp,ans);
    return ans;
    }
};
