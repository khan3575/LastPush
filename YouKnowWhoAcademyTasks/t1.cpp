#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long 
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int cnt(int a, int b)
{
	int odd = (a%2) + (b%2);
    return (odd<=1)? (a+b) : (a+b-1);
}
int main()
{
	FastIO;
	
	int t;
	cin >> t;
	while(t--)
	{
		int x, y, z;
		cin >> x >> y >> z;
		int r1= cnt(x,y);
		int r2= cnt(y,z);
		int r3 = cnt (x,z);

		cout<< max({r1,r2,r3})<<endl;
	}
	return 0;
}