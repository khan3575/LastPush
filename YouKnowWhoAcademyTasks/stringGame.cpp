#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main()
{
	FastIO;
	
	string s,t;
	cin >> s >> t;
	int n = s.size();
	vector<int>charArr(26);
	for(int i = 0; i < n; i++)
	{
		charArr[s[i]-'a']++;
	}
	vector<vector<int>>v(n, vector<int>(26));
	vector<int> minusArr(26);
	for(int i = 0; i<n; i++)
	{
		int x;
		cin>> x;
		minusArr[s[x-1]-'a']--;
		for(int j = 0; j < 26; j++)
		{
			v[i][j]= minusArr[j];
		}
	}
	vector<int> res(26);
	for(int i = 0; i < t.size(); i++)
	{
		res[t[i]-'a']++;
	}
	int l = 0, r= n-1;

	auto isOk = [&](int mid)
	{
		
		bool ok = true;
		for(int i = 0; i < 26; i++)
		{
			
			if(charArr[i]-v[mid][i] < res[i])
			{cout<<charArr[i]+v[mid][i]<<" "<< res[i]<<"\n";
				ok= false;
				break;
			}
		}
		cout<<endl;
		return ok;
	};

	while(l<=r)
	{
		int mid = (l + r)/2;

		if(!isOk(mid))
		{
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	cout<< l <<endl;
	return 0;
}