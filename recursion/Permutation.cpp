class Solution {
public:

    void permute(vector<int> &nums,vector<int> &temp,vector<vector<int>> &ans,vector<bool> &visited)
    {
        if(temp.size()==nums.size())
        {
            ans.push_back(temp);
            return;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(visited[i]==false)
            {
                temp.push_back(nums[i]);
                visited[i]=true;
                permute(nums,temp,ans,visited);
                visited[i]=false;
                temp.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        vector<bool> visited(nums.size(),false);
        permute(nums,temp,ans,visited);

        return ans;
        
    }
};
