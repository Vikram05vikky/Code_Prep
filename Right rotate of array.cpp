Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]

Solution:

class Solution {
public:

    void reverse(vector<int>& nums,int left,int right)
    {
        while(left<=right)
        {
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
    }

    void rotate(vector<int>& nums, int k) {

        int ans=nums.size();
        k=k%ans;
        reverse(nums,0,ans-k-1);
        reverse(nums,ans-k,ans-1);
        reverse(nums,0,ans-1);
    }
};
