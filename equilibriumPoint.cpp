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
	ll ar[n+1];
	scan(ar,n);
	ll pref=0, suff=0, flag=0;
	REP(i,n)
	{
		pref+=ar[i];
		suff+=ar[n-i-1];
		if(pref == suff)
		{
			flag=i+1;
			break;
		}
	}

	if(flag==0)
		cout<<"No equilibrium"<<endl;
	else
		cout<<flag<<endl;

	return 0;
}