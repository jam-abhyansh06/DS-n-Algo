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


ll maxprofRec(vl v, ll start, ll end)
{
	if(end<=start)
		return 0;
	ll profit=0;
	FOR(i,start,end)
	{
		for(ll j=i+1; j<=end; j++)
		{
			if(v[j]>v[i])
			{
				ll curr_prof = v[j]-v[i]+maxprofRec(v,start,i-1)+maxprofRec(v,j+1,end);
				profit = max(profit, curr_prof);
			}
		}
	}
	return profit;
}

ll soln2(vl v,ll n)
{
	ll profit=0;
	REP(i,n-1)
	{
		if(v[i+1]>v[i])
			profit+=v[i+1]-v[i];
	}
	return profit;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	#endif
	ios()
	ll n;
	cin>>n;
	vl v(n+1);
	scan(v,n)
	cout<<maxprofRec(v,0,n-1)<<endl;
	cout<<soln2(v,n);
	return 0;
}