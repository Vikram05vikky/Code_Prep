Problem statement
Given an array ‘a’ of size ‘n’-1 with elements of range 1 to ‘n’. The array does not contain any duplicates. Your task is to find the missing number.



For example:
Input:
'a' = [1, 2, 4, 5], 'n' = 5

Output :
3

Code:
int missingNumber(vector<int>&a, int N) {
    // Write your code here.

    int summ=(N*(N+1))/2;

    int sum=0;
    for(int i:a)
        sum+=i;

    return summ-sum;
}
