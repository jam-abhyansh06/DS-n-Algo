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
	ll loop=0;
	test()
	{
		loop++;
		ll n;
		cin>>n;
		ll ar[n+1];
		scan(ar,n);
		ll dp[n];
		FOR(i,0,n-1)	dp[i]=ar[i+1]-ar[i];

		ll temp=1, count=1;
		FOR(i,1,n-1)
		{
			if(dp[i]==dp[i-1])
				++temp;
			else
			{
				count=max(count,temp);
				temp=1;
			}
		}
		// print(dp,n-1)
		cout<<"Case #"<<loop<<": "<<max(temp,count)+1<<endl;
	}
	return 0;
}