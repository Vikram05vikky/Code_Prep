#include <bits/stdc++.h> 

int getNum(vector<int>&a, int n)

{

    int number = 0;

    for(int i=0; i<n;i++)

    {

        number = number*10+a[i];

    }

    return number;

}

 

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) 

{

        int sum=0, val=0;

        vector<int> v;

        sum = getNum(a,n) + getNum(b,m);

 

        while(sum>0)

        {

            val = sum%10;

            sum = sum/10;

 

            v.push_back(val);

        }

        reverse(v.begin(), v.end());

 

    return v;   

 

}
