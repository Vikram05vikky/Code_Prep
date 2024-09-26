class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int> maa;

        for(int i=0;i<n;i++)
        {
            int a = nums[i];
            int more = target - a;
            if(maa.find(more)!=maa.end())
            {
                return {maa[more],i};
            }
            maa[a]=i;
        }

        return {-1,-1};
    }
};
