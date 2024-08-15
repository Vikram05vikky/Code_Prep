Problem statement
You are given an array ‘ARR’ of length ‘N’ consisting of only ‘0’s and ‘1’s. Your task is to determine the maximum length of the consecutive number of 1’s.



For Example:
ARR = [0, 1, 1, 0, 0, 1, 1, 1], here you can see the maximum length of consecutive 1’s is 3. Hence the answer is 3

Code:

int consecutiveOnes(vector<int>& arr){
    //Write your code here.

    int count=0;
    int ans=0;
    for(int i : arr)
    {
        if(i==1)
            count++;
        else
            count=0;

        ans=max(ans,count);
    }

    return ans;


}
