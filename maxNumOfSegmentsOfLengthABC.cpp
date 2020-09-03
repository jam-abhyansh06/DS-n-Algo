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


ll recursiveSoln(ll n, ll a, ll b, ll c)
{
	if(n==0)
		return 0;
	if(n<0)
		return -1;
	ll res = max(max( recursiveSoln(n-a,a,b,c), recursiveSoln(n-b,a,b,c)), recursiveSoln(n-c,a,b,c));
	if(res == -1)
		return -1;
	return res+1;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	#endif
	ios()
	cout<<recursiveSoln(23,1,9,12);
	return 0;
}