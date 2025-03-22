#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main()
{
	FastIO;
	int t;
	cin >>t;
	while(t--)
	{
		int n;
		unordered_map<int,int>freq;
		cin>> n;
		for(int i =0; i<n;i++)
		{
			int x;
			cin >> x;
			freq[x]++;
		}
		int x=0,y=0;
		for(auto &[num, count] :freq)
		{
			if(num==0)
			{
				y=count;
			}
			else{
				x += count%2;
				y += count/2;
			}
		}
		if(y>0)
		{
			y=1;
		}
		cout<< x + y<<'\n';
	}
	
	return 0;
}