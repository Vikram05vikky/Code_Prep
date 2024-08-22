#include<bits/stdc++.h>
using namespace std;

bool isplindrome(vector<char> &str)
{
    
    int l=0,r=str.size()-1;
    
    while(l<=r)
    {
        if(str[l]!=str[r])
            return false;
        l++;
        r--;
    }
    return true;
}

int main()
{
    string str="avaavasrtatr";
    // cin>>str;
    int l=0,r=0;
    vector<char> temp;
    int len=INT_MIN;
  vector<vector<char>>ans;
    
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        for(int j=i;j<str.length();j++)
        {
            if(str[j]==ch)
            {
                l=i;
                r=j;
               
                for(int k=l;k<=r;k++)
                {
                    temp.push_back(str[k]);
                }
                if(isplindrome(temp))
                {
                //   int n=temp.size();
                //   len=max(len,n);
                    ans.push_back(temp);
                    
                    
                }
                temp.clear();
            }
        }
    }
    for(auto it : ans)
    {
        for(auto it2: it)
        cout<<it2;
        cout<<endl;
    }
    // cout<<len;
    // if(isplindrome(str))
    // {
    //     cout<<"Palindrome";
    // }
    
}
