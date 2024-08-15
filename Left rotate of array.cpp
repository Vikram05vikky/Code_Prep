Problem statement
Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.



Example:
'arr '= [1,2,3,4,5]
'k' = 1  rotated array = [2,3,4,5,1]
'k' = 2  rotated array = [3,4,5,1,2]
'k' = 3  rotated array = [4,5,1,2,3] and so on.

Solution:

void reverse(vector<int>& arr,int left,int right)
{
    while(left<=right)
    {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n=arr.size();

    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
    return arr;
}
