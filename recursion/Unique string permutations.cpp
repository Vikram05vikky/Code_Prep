#include <bits/stdc++.h> 

void permute(string &s,string &temp,vector<bool> &visited,vector<string> &ans)
{
	if(temp.size()==s.size())
	{
		ans.push_back(temp);
		return;
	}

	for(int i=0;i<s.size();i++)
	{
		if(visited[i] || i>0 && s[i]==s[i-1] && !visited[i-1])
			continue;
		// if(visited[i]==false)
		// {
			temp.push_back(s[i]);
			visited[i]=true;
			permute(s,temp,visited,ans);
			visited[i]=false;
			temp.pop_back();
		// }
	}
}


vector<string> uniquePrem(string& str) 
{
	string temp;
	vector<bool> visited(str.size(),false);
	vector<string> ans;
	sort(str.begin(),str.end());
	permute(str,temp,visited,ans);
	return ans;
}
