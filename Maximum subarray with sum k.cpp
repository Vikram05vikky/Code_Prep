Problem statement
Ninja and his friend are playing a game of subarrays. They have an array ‘NUMS’ of length ‘N’. Ninja’s friend gives him an arbitrary integer ‘K’ and asks him to find the length of the longest subarray in which the sum of elements is equal to ‘K’.

Ninjas asks for your help to win this game. Find the length of the longest subarray in which the sum of elements is equal to ‘K’.

If there is no subarray whose sum is ‘K’ then you should return 0.

Example:
Input: ‘N’ = 5,  ‘K’ = 4, ‘NUMS’ = [ 1, 2, 1, 0, 1 ]

Output: 4

There are two subarrays with sum = 4, [1, 2, 1] and [2, 1, 0, 1]. Hence the length of the longest subarray with sum = 4 is 4.

Solution:

#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
    unordered_map<int,int> Map;
    int sum=0,len=0;

    for(int i=0;i<nums.size();i++)
    {
        sum=sum+nums[i];

        if(sum==k)
            len=i+1;

        int rem = sum - k;

        if(Map.find(rem)!=Map.end())
        {
            int lentem= i - Map[rem];
            len=max(len,lentem);
        }
        if(Map.find(sum)==Map.end())
            Map[sum]=i;

    }

    if(len==0)
        return 0;
    else
        return len;
}
