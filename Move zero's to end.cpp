Problem statement
Given an array 'arr' of 'n' non-negative integers, your task is to move all the zeros to the end of the array while keeping the non-zero elements at the start of the array in their original order. Return the modified array.



Example :
Input: ‘n’ = 5, ‘arr’ = [1, 2, 0, 0, 2, 3]
Output: [1, 2, 2, 3, 0, 0]

Explanation: Moved all the 0’s to the end of an array, and the rest of the elements retain the order at the start.

Solution:

vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    int i,j;

    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            j=i;
            break;
        }

    }

    if(i==a.size())
        return a;

    i=j+1;

    while(i<a.size())
    {
        if(a[i]!=0)
        {
            swap(a[i],a[j]);
            i++;
            j++;
        }
        else
            i++;
    }
    
    return a;

}
