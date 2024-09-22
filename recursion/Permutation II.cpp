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
              // i>0 for not  considering only one element in the array 
        // nums[i]==nums[i-1] for duplicates
        //!visitedEle[i-1] for checking previous duplicate is not taken
        //If previous duplicate is not taken then that previous duplicate can be taken into the array while generating permutations
        //So kindly avoid those
        //If previous duplicate is taken(visited) then we are not going to take that previous duplicate anymore
        //Which ultimately produces new permuations

            if(visited[i] || i>0 && nums[i]==nums[i-1] && !visited[i-1])
                continue;
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

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;

        vector<bool> visited(nums.size(),false);
        sort(nums.begin(),nums.end());
        permute(nums,temp,ans,visited);
        return ans;
    }
};
