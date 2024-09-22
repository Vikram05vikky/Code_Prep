#include<bits/stdc++.h>
using namespace std;

void permute(string &s,string &temp,vector<bool> &visited)
{
	if(temp.size()==s.size())
	{
		cout<<temp<<endl;
		return;
	}
	for(int i=0;i<s.size();i++)
	{
		if(visited[i]==false)
		{
			temp.push_back(s[i]);
			visited[i]=true;
			permute(s,temp,visited);
			visited[i]=false;
			temp.pop_back();
		}
	}
}

void printPermutations(string input){
		string temp;
		vector<bool> visited(input.size(),false);

		permute(input,temp,visited);
}
