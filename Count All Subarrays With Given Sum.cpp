int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {

    int count=0,sum=0;
    unordered_map<int,int> Map;

    for(int i=0;i<arr.size();i++)
    {
        sum=sum+arr[i];

        if(sum==k)  
            count++;

        int rem = sum - k;

        if(Map.find(rem)!=Map.end())
        {
            count+=Map[rem];
        }
        Map[sum]++;
    }
    return count;
}
