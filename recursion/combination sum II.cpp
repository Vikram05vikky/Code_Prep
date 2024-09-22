class Solution {
public:

    void solve(vector<int> &arr,int ind,int sum,vector<int> &temp,vector<vector<int>> &ans,int target)
    {
        if(sum == target)
        {
            ans.push_back(temp);
            return;
        }

        for(int i=ind;i<arr.size();i++)
        {
            if(i>ind && arr[i]==arr[i-1])
                continue;
            if(sum+arr[i]>target)
                break;
            temp.push_back(arr[i]);
            solve(arr,i+1,sum+arr[i],temp,ans,target);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        solve(candidates,0,0,temp,ans,target);
        return ans;
    }
};
