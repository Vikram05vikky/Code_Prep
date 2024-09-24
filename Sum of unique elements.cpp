class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;

        map<int,int> ans;
        for(int i=0;i<nums.size();i++)
            ans[nums[i]]++;

        for(auto it : ans)
        {
            if(it.second == 1)
                sum+=it.first;
        }

        return sum;
    }
};
