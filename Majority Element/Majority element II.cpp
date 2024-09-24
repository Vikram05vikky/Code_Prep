#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    map<int,int> ans;
    int c=0;
    vector<int> sol;

    for(int i=0;i<arr.size();i++)
    {
        ans[arr[i]]++;
    }
    for(auto it : ans)
    {
        if(it.second > (arr.size()/3))
        {
            sol.push_back(it.first);
        }
    }

    return sol;

}
