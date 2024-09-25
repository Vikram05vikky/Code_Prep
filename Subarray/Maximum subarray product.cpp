class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int pref=1,suf=1;
        int maxx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(pref==0)
                pref=1;
            if(suf==0)
                suf=1;

            pref*=nums[i];
            suf*=nums[n-i-1];
            maxx=max(maxx,max(pref,suf));


        }
        return maxx;
    }
};
