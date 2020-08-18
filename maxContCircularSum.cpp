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
#define INF 1e18

int main()
{
	#ifndef ONLINE_JUDGE
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	#endif
	ios()
	
	ll n;
	cin>>n;
	ll ar[n+1];
	scan(ar,n);

	ll maxs=-INF, maxe=0, maxsneg=-INF, maxeneg=0, sum=0;

	REP(i,n)
	{
		sum+=ar[i];

		maxe=maxe+ar[i];
		if(maxs<maxe)	maxs=maxe;
		if(maxe<0)	maxe=0;

		maxeneg=maxeneg-ar[i];
		if(maxsneg<maxe)	maxsneg=maxeneg;
		if(maxeneg<0)	maxeneg=0;
	}
	// cout<<maxs<<" "<<maxsneg<<" "<<sum<<endl;
	cout<<max(maxs, sum+maxsneg)<<endl;
	return 0;
}

// ll maxs=-INF, maxe=0, p=0, pref=0, s=0, suff=0;

// 	REP(i,n)
// 	{
// 		maxe=maxe+ar[i];
// 		if(maxs<maxe)	maxs=maxe;
// 		if(maxe<0)	maxe=0;

// 		p+=ar[i];
// 		if(pref<p)	pref=p;

// 		s+=ar[n-i-1];
// 		if(suff<s)	suff=s;
// 	}

// 	cout<<maxs<<" "<<pref<<" "<<suff<<endl;

// 	cout<<max(maxs, pref+suff);