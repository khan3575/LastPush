#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
string s, t;
vector<int> v;
bool subSeq(string news)
{
	int n= news.size();
	int i = 0;
	for(char c : t)
	{
		while(i<n && news[i]!=c)
		{
			++i;
		}
		if(i>=n )
		{
			return false;
		}
		i++;
	}
	return true;
}
bool isOk(int mid)
{
	string news="";
	int n = s.size();
	vector<int> vis(n,true);
	for(int i = 0 ; i<mid; i++)
	{
		vis[v[i]-1]=false;
	}
	for(int i = 0; i <n; i++)
	{
		if(vis[i])
		{
			news+=s[i];
		}
	}
	return subSeq(news);

}
int main()
{
	FastIO;
	cin >> s >> t;
	int n= s.size();
	v.resize(n);
	for(int i = 0; i <n; i++)
	{
		cin >> v[i];
	}
	int l = 0, r=  n-1;
	
	while(l <= r)
	{
		int mid = (l + r) / 2;
		if(isOk(mid))
		{
			
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
	}
	cout<< r<<endl;
	return 0;
}