Problem statement
There is an integer array ‘a’ of size ‘n’.



An element is called a Superior Element if it is greater than all the elements present to its right.



You must return an array all Superior Elements in the array ‘a’.



Note:

The last element of the array is always a Superior Element. 


Example

Input: a = [1, 2, 3, 2], n = 4

Output: 2 3

Solution:

vector<int> superiorElements(vector<int>&a) {
    // Write your code here.

    int maxx=INT_MIN;
    vector<int> ans;
    for(int i=a.size()-1;i>=0;i--)
    {
        if(a[i]>maxx)
        {
            ans.push_back(a[i]);
        }
        maxx=max(maxx,a[i]);
    }

    return ans;
}
