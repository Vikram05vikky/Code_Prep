#include <bits/stdc++.h> 
vector<int> countTheNumber(vector<int> &arr, int n, int k) {
	map<int,int> ans;
	vector<int> sol;

	for(int i=0;i<arr.size();i++)
	{
		ans[arr[i]]++;
	}


	for(auto it : ans)
	{
		if(it.second >= (arr.size()/k))
			sol.push_back(it.first);
	}

	return sol;
}
