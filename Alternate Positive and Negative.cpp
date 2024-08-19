#include <bits/stdc++.h> 

void posAndNeg(vector<int> &arr)
{
    // Write your code here.
    vector<int> eve;
    vector<int> odd;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>=0)
            eve.push_back(arr[i]);
        else
            odd.push_back(arr[i]);
    }

    arr.clear();

    int k=0,l=0;

    for(int i=0;i<eve.size()+odd.size();i++)
    {
        if(i%2==0)
            arr.push_back(eve[k++]);
        else    
            arr.push_back(odd[l++]);
    }
  
}
