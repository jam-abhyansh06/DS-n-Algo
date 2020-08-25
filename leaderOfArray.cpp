#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, n) FOR(i, 0, (n))
#define FOR(i, a, b) for(int i=(a); i<(b); i++)
typedef vector<ll> vl;
#define PB push_back
#define ios() ios::sync_with_stdio(false); cin.tie(0);
#define scan(a,n) for(ll i=0;i<n;i++)	cin>>a[i];
#define print(a,n) for(ll i=0;i<n;i++)	cout<<a[i]<<"\n";
#define test() ll t; cin>>t; while(t--) 
#define endl "\n"


int main()
{
	#ifndef ONLINE_JUDGE
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	#endif
	ios()
	
	ll n;
	cin>>n;
	vl v(n+1), dp(n+1,0);
	scan(v,n)

	ll temp=n-1;
	dp[n-1]=1;
	for(ll i=n-2; i>=0; i--)
	{
		if(v[i]>v[temp] && v[i]>v[i+1])
		{
			dp[i]=1;
			temp=i;
		}
	}
	REP(i,n)
	{
		if(dp[i] == 1)
			cout<<v[i]<<" ";
	}
	return 0;
}