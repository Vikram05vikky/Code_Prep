int countt=0;
void sol(vector<int> &arr,int ind,int c,vector<int> &temp,vector<vector<int>> &ans,int k)
{
	if(ind == arr.size())
	{	
		if(c == k)
			countt++;

		return;
	}
	sol(arr,ind+1,c,temp,ans,k);
	temp.push_back(arr[ind]);
	sol(arr,ind+1,c+arr[ind],temp,ans,k);
	temp.pop_back();
}

int findWays(vector<int>& arr, int k)
{
	vector<int> temp;
	vector<vector<int>> ans;
	int c=0;
	sol(arr,0,c,temp,ans,k);
	return countt;
}
