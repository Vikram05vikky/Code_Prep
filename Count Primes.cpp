bool isPrime(int n)
{
    int c=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            c++;
            if(n/i!=i)
                c++;
        }

    }

    return c==2;
}

vector<int> countPrimes(int n)
{
    // Write your code here.

    // vector<bool> ans(n,true);
    vector<int> ans;

    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            ans.push_back(i);
            if(n/i!=i)
                ans.push_back(n/i);
        }

    }

    vector<int> res;

    for(auto it : ans)
    {
        if(isPrime(it))
            res.push_back(it);
    }


    sort(res.begin(),res.end());
    return res;
}
