#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here

    int count=0,sum=0;
    unordered_map<int,int> Map;
    Map[0]=1;
    for(int i=0;i<a.size();i++)
    {
        sum=sum^a[i];

        int rem = sum ^ b;

        if(Map.find(rem)!=Map.end())
        {
            count=count+Map[rem];
        }
        Map[sum]++;
    }
    return count;
}
