#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main()
{
	FastIO;
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		char ter='0';
		int cnt=0;
		for(int i = 0; i<n; i++)
		{
			if(s[i]==ter)
			{
				continue;
			}
			else{
				ter = (ter == '0') ? '1' : '0';
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}