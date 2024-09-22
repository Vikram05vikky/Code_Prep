void sol(vector<int> &num,int ind,vector<int> &temp,int ans)
{
	if(ind >= num.size())
	{
		temp.push_back(ans);
		return;
	}
	sol(num,ind+1,temp,ans);
	sol(num,ind+1,temp,ans+num[ind]);
}

vector<int> subsetSum(vector<int> &num){
	vector<int> temp;
	int ans=0;
	sol(num,0,temp,ans);
	sort(temp.begin(),temp.end());
	return temp;
}
