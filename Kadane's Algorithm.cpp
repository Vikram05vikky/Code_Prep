long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long maxx=INT_MIN,sum=0;

    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];

        if(sum<arr[i])
            sum=arr[i];
        if(sum<0)
            sum=0;
       if(sum>maxx)
            maxx=sum;

    }
    return maxx;
}
