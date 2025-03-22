#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main()
{
	FastIO;
	
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		string left;
		for(int i = 0; i<(n+1)/2; i++)
		{
			left.push_back(max(s[i],s[n-i-1]));
		}
		string ter;
		if(n%2==0)
		{
			ter = left;
			reverse(left.begin(),left.end());
			ter+= left;
		}
		else{
			ter = left;
			string t = left.substr(0,left.size()-1);
			ter += t;
		}
		bool ok=true;
		for(int i = 0; i<n;i++)
		{
			if((s[i]==ter[i] || s[i]==ter[n-i-1]) && ter[i]!='z')
			{
				ter[i]++;
				ter[n-i-1]++;
				break;
			}
		}
		if(ter>s)
		{
			cout<<"Yes\n";
		}
		else{
			cout<<"-1\n";
		}
	}
	return 0;
}